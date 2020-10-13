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

int palindrome(char s[MAX_SIZE]){
    int len = strlen(s) - 2 ;
    int i = 0;
    char temp;
    while (i <= floor(len / 2 ) && s[i] == s[len - i]){
        i++;
    }
    if (i == floor(len / 2)+1){return 1;}
    else                    {return 0;}
}


void main(){
    printf("Insert a string... \n");
    char s[MAX_SIZE];
    fgets(s, MAX_SIZE, stdin);
    int pal = palindrome(s);
    if (pal == 1){printf("\n The inserted string is a palindrome");}
    else {printf("\n The inserted string is not a palindrome");}
}
