#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Write a program that reads from the keyboard an integer n, n 0,
and prints the values of the Fibonacci series, one per line,
up to the ﬁrst value strictly bigger than n (this value is not to be printed).
 Fibonacci series is deﬁned recursively as:

 F(0) = 0 F(1) = 1 F(i)=F(i-1) + F(i-2) */

 int fibonacci(i){
    if( i < 2){ return(1);}
    else{
        return(fibonacci(i-1)+fibonacci(i-2));
    }
 }



 void main(){
     printf("Inserisci un numero intero positivo..  \n \n");
     int n;
     scanf("%d", &n);
     printf("Ecco la sequenza di Fibonacci dei numeri minori di %d: \n\n",n);
     int i = 0;
     while ( fibonacci(i) <= n ){
        printf("%d \n\n", fibonacci(i));
        i++;
     }
 }
