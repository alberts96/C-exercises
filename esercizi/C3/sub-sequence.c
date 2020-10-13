#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/*Write a program that reads from the keyboard
 a sequence of 10 integers writing it in an array,
then prints (one per line, and in the same input order)
the values of the sequence that satisfy the following two properties:
1. Positive and even, or
2. Negative and the next value is positive.
Note: zero is considered to be positive*/


void main(){
    int a[10];
    int *p = a;
    printf("Inserisci dieci numeri interi...  \n");
    int i = 0 ;
    int j = 0 ;
    while (p != &a[10]){
        printf("Inserisci un numero...   \n");
        scanf("%d", p);
        p++;
    }
    printf("\n \n I seguenti numeri rispettano le proprieta': \n \n");
    for(p = a; p != &a[10];p++){
        if (*p >= 0){
            if (*p % 2 == 0){
                printf("%d \n",*p);
            }
        }
        else{
            if (*(p+1) >= 0){
                printf("%d \n",*p);
            }
        }
    }
}
