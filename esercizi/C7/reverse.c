#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>



/*Write a C program that takes in input a string S (at most 40 chars,
containing spaces) and prints the string in reverse order.

BONUS: can you do it in place, that is without allocating/using extra space,
 but just modifying the original string?*/


#define MAX_SIZE 40

char *reverse(char s[MAX_SIZE]){
    int len = strlen(s) - 2 ;
    int i = 0;
    char temp;
    while (i <= floor(len / 2 )){
        temp = s[i];
        s[i] = s[len - i];
        s[len - i] = temp;
        i++;
    }
    return s;
}



void main(){
    printf("Insert a string... \n");
    char s[MAX_SIZE];
    fgets(s, MAX_SIZE, stdin);
    reverse(s);
    printf("%s", s);
}
