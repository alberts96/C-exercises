#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/* Write a C program that reads 3 integers from the standard input and executes function ordered swap(·,·,·)
 to the three variables that store the three input values. The read values have to be passed to the function
 in the same order they are acquired from the standard input. Implement the function ordered swap, that swaps
 the content of the three input variables so that the variable corresponding to the ﬁrst argument contains that
  smallest integer, the second variable contains the median integer, and the third variable the largest integer.
   Print the content of the three variables after the execution of the function. */

void swap(int* a , int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


void order_swap(int* a, int* b, int* c){
    if (*a > *b){swap(a,b);}
    if (*b > *c){swap(b,c);}
    if (*a > *b){swap(a,b);}
}




void main() {
    printf("Inseriscidue due float ... \n \n");
    int a;
    int b;
    int c;
    printf("Inserisci il primo intero... \n \n");
    scanf("%d", &a);
    printf("Inserisci il secondo intero... \n \n");
    scanf("%d", &b);
    printf("Inserisci il terzo intero... \n \n");
    scanf("%d", &c);
    order_swap( &a, &b, &c);
    printf("In ordine sono:%d - %d - %d",  a, b, c) ;  // %.2f id the format for only two decimal digits

}
