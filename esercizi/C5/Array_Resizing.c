#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
/* Write a C program that reads 6 integers from the keyboard
and assigns the ﬁrst 5 values at the ﬁrst 5 positions of an array;
store the sixth value in a variableN. Write a function that,
given input the array initialized eith the ﬁrst 5 values from the keyboard and the integer N,
 returns the array resized to contain 5+N elements,
  such that each one of the new N elements corresponds to the sum of the numbers before it in the array, i.e.
arr[i]=i1 X j=0 arr[j].
In main, print the content of the array returned by the function. */

void resizing(int *a, int N){
    int sum=0;
    int i;
    for(i = 0; i < 5; i++){
        sum += a[i];
    }
    a = realloc( a ,sizeof(int)*(N+5));
    a[5] = sum;

    for(i = 6; i < N + 5; i++){
        a[i] = a[i-1] * 2;
    }
}

void main(){
    printf("inserisci 5 interi \n");
    int N;
    int i=0;
    int *a = malloc(sizeof(int)* 5);
    if (a == NULL){printf("memoria non disponibile");}
    for(; i < 5; i++){
        printf("Inserisci numero per array iniziale... \n");
        scanf("%d",&a[i]);
    }
    printf("Inserisci numero magico... \n");
    scanf("%d",&N);
    resizing(a,N);
    for(i = 0; i < 5 + N; i++){
        printf("%d%\n", a[i]);
    }
}
