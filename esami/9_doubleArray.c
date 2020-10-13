#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

/*Exercise 3 (10 points). [dynamic array] Write a C function called doubleArray() that takes in input an
array of integers vect, and its size dim (passed as a pointer to int). The function doubles the size of vect,
updating its size.
Example: [4 -2 2 -3] → [4 -2 2 -3 0 0 0 0]

Then, write a main() function as follows:
1. Ask the user to input an integer n, between 1 and 4, that will be initial size of an array.
2. Dynamically create an array arr of size n.
3. Start filling the array with 2048 randomly generated integers; each time the array is full, call the
   doubleArray() function. After each invocation of doubleArray(), print again the content of the
   array arr

   Example: n = 2, arr: [- -]; [4 -2 - -]; [4 -2 2 -3 - - - -]; and so on. The ‘-’ represent the new positions of thedoubled array
*/
void doubleArray( int *a, int *dim){
    *dim = *dim * 2;
    a = realloc(a, sizeof(int) * *dim);
}
void printArray( int *a, int *dim){
    int j;
    for (j = 0; j < *dim ; j++){
        printf("%d ", a[j] );
    }
    printf("\n\n");
}


void main(){
    int n;
    printf("Insert a number between 1 and 4");
    int max_size = 2048;
    scanf("%d", &n);
    int *a = malloc(sizeof(int)* n);
    int *dim = &n;
    int i = 0;
    int d;
    while(i < 2048){
        d = rand()%100;
        if (i == n){
                printArray(a, dim);
                doubleArray(a, dim);
        }
        a[i] = d;
        i++;
    }

}
