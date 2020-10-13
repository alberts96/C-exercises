#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

/*Write a C program that, given two integers N and M from the standard input,
calling a function multiples (that you need to write),
computes the set of the integers in the range [1,N] that are multiples of M.
 The call to the function will print all the elements sorted in increasing order. */


 int *multiples(int n, int m){
    int i = m;
    int j = 0;
    int *a =  malloc(sizeof(int) * n);
    while (i <= n){
        if (i % m == 0){
            a[j] = i ;
            j++;
        }
        a[j]=NULL;
        i++;
    }
    return (a);
 }


 void main(){
    int m;
    int n;
    printf("Inserisci due numeri interi e vediamo quali multipli del primo numero sono minori del secondo..  ");
    scanf("%d%d", &m,&n);
    int *a = multiples(n,m);
    int i=0;
    for(;a[i] != NULL  ;i++){
        printf("%d - ",a[i]);
    }
 }
