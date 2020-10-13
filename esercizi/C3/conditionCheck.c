#include <stdio.h>
#include <stdlib.h>
/*Write a program that reads from the keyboard 10 integers,
writes them in an array A,
 and writes the indexi of the ﬁrst element that satisﬁes the following condition:
    A[i]=A[i + 1] - A[i - 1]
    or prints -1 if no elements satisﬁes the above conditio*/


void main(){
    printf("Inserisci 10 interi..  ");
    int i = 0;
    int a[10];
    while(i<10){
        scanf("%d", &a[i]);
        i++;
    }
    i=1;
    while(i<9){
        a[i] == a[i+1] - a[i-1] ? printf(" position %d",i): printf("") ;   // uso il punto di domanda
        i++;
    }
}
