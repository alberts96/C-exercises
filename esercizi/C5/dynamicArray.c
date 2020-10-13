#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
/*Write a C program that reads 1 integer N from the keyboard and passes it to a function
that allocates an array of size N and ﬁlls it with the values of the ﬁrst N multiples of 5.
In main, print the content of the array returned by the function.
Assumption - N is a > 0 integer */


int *dynamic(int N){
    int *a = malloc(sizeof(int) * N);
    int i;
    for(i = 1; i <= N; i++){
        a[i-1] = 5 * i;
    }
    return (a);
}

void main(){
    printf("Inserisci un intero positivo...  \n");
    int N;
    scanf("%d", &N);
    int *a = dynamic(N);
    int i = 0;
    for (;i <N; i++){
        printf("%d \n",a[i]);

    }
}
