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


typedef struct node{
    int value;
    struct node *next;
}node;



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



void printList(node* head){
    node* current = head;
    while ( current != NULL){
        printf("%d ", current -> value);
        current = current -> next;
    }
}

void insertList(node* head, int a){
    node* current = (node*)malloc(sizeof(node));
    current -> value = head -> value;
    current -> next = head -> next;
    head -> value = a;
    head -> next = current;
}

void appendList(node* head, int a){
    node* tail = (node*)malloc(sizeof(node));
    tail -> value = a;
    tail -> next = NULL;
    node* current = head;
    while (current -> next != NULL){
        current = current -> next;
    }
    current -> next = tail;
}

int sumList(node* head){
    int sum = 0;
    node* current = head;
    while ( current != NULL){
        sum += current -> value;
        current = current -> next;
    }
    return isprime(sum);

}




void main(){
    srand(time(NULL));
    printf("Insert a number greater than 99 pls... \n");
    int n;
    int i;
    int d;
    scanf("%d", &n);
    node* head = (node*)malloc(sizeof(node));
    head -> value = NULL;
    head -> next = NULL;
    for( i = 0; i < n; i++ ){
        d = random(-50, 50);
        appendList(head, d);

    }
    printList(head);
    printf("\n\n");
    int prime = sumList(head);
    if (prime == 1){
        printf("The sum gives a prime number!!  :D");
    }
    else{
        printf("The sum gives a not prime number :(");
    }

}
