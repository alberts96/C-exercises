
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
/* Write a program that reads from the keyboard an integre number x and writes the value of x!.
 By x! we mean thefactorial of x, that isx·(x1)·(x2)···1. */


 int factorial(int n){
    if (n == 0){ return (1);}
    else{
        return(n*factorial(n-1));
        }
 }

 void main(){
    int n;
    printf("Inserisci un numero..   ");
    scanf("%d",&n);
    int factn = factorial(n);
    printf("Il fattoriale di %d e' %d", n, factn);
 }
