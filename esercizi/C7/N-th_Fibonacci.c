#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>


/*Write a program that reads a number N and prints the N-th Fibonacci number,
 computed using the Binet’s formula

*/

float fibonacci(int n){
    float fi  = (1 + sqrt(5)) / 2 ;
    float fi_ = (1 - sqrt(5)) / 2 ;
    double fn =  floor((pow(fi, n) - pow(fi_, n))/ sqrt(5));

    return fn;
}

void main(){
    printf("Inserisci un intero.. \n");
    int n;
    scanf("%d", &n);
    printf("Nella sequenza fibonacci al posto %d compare %f", n, fibonacci(n));
}
