
#include <stdio.h>
#include <stdlib.h>

/*
Exercise 3 (10 points).​ ​[lists] ​Write three C functions, ​insertList()​, ​sumList()​, and ​printList()​, such that:
    1.  insertList() ​takes in input a list ​L​, and an integer a, and adds a at the beginning of L
        (assume   that the elements of the list contains integers).
    2.  sumList()​takesininputa list​ L ​and returns 1 if the sum of the absolute values of the elements in
        L is a prime number and 0 otherwise.
    3.  printList() ​takes in input a list ​L ​and prints all its elements on the same line, with a single space  
        separating the elements.

    Example (of sumList()) ​ : [4 -2 2 -3] → 1

Then, write a ​main()​ function as follows:
    1. Dynamically creates a list L of at least 100 elements, by repeatedly calling ​insertList()​.
       The integers contained in L have to be randomly generated, and must be between -50 and 50.
    2. First call ​printList()​ and then ​sumList() ​on the just created list L.

*/

int isprime(int n){
    int i;
    for(i = 2; i < n; i++ ){
        if (n % 1 == 0){return 1;}
    }
    return 0;
}

int random(int min, int  max){
    return rand() % (max - min) + min;
}

void printList(int* L, int* dim){
    printf("\n");
    int n = *dim / sizeof(int);
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", L[i]);
    } printf("\n");
}

void insertList(int* L, int* dim, int a){
    *dim += 1;

    printf("%d", *dim);
    int i;
    L = realloc(L, *dim * sizeof(int));
    for(i = *dim  ; i > 0; i--){
        L[i] = L[i-1];
    }

    L[0] = a;
    printf(" %d-%d ",L[i], *dim);
}

int sumList(int* L, int* dim){
    int i = 0;
    int n = *dim / sizeof(int);
    int sum = 0;
    for (i = 0; i < n; i++){
        sum *= L[i];
    }
    return isprime(sum);
}


void main(){
    srand(time(NULL));
    printf("Insert a number greater than 99 pls... \n");
    int n;
    int i;
    scanf("%d", &n);
    int* L = malloc(sizeof(int));
    int d = random(-50, 50);
    L[0] = d;
    int* dim = malloc(sizeof(int));
    *dim = 1;
    for(i = 1; i < n; i++){
        d = random(-50, 50);
        insertList(L, dim, d);
    } printf("ok");
    printList(L, dim);

}
