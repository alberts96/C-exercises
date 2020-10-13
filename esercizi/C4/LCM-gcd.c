#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Write a C program that reads from the keyboard two integers N and M
and calls two functions to compute the Least Common Multiple and the
Greatest Common Divisor between N and M.
The program prints to the standard output the LCM(N,M) and then the gcd(N,M).*/

int LCM(int N, int M){
    long LCM = NULL;
    long i;
    if(N > M){i = N;}
    else     {i = M;}
    while(LCM == NULL){
        if ( i % N == 0 && i % M == 0){LCM = i;}
        i++;
    }
    return (LCM);
}

int gcd(int N, int M){
    long gcd = NULL;
    long i;
    if(N > M){i = M;}
    else     {i = N;}
    while(gcd == NULL && i>0){
        if ( N % i == 0 && M % i == 0){gcd = i;}
        i--;
    }
    return (gcd);
}


void main() {
    printf("Inseriscidue numeri interi positivi... \n \n");
    int N;
    int M;
    scanf("%d%d", &N, &M);
    printf("Il minimo comune multiplo fra %d e %d e' :   %d \n \n", N, M, LCM(N, M));
    printf("Il massimo comune divisore fra %d e %d e' :   %d \n", N, M, gcd(N, M));

}
