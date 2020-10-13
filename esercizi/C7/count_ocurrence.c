#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

/*Write a C program that takes in input a string S (it might contain spaces, length at most 40 chars) and a char c.
 The program prints the number of occurrences of c in S. Note:
 the program is case sensitive, i.e., lower case is different from upper case */


int countOccurrence(char *s, char c){
    int count= 0;
    while(*s != NULL){
        if (*s == c){
            count++;
        }
        s++;
    }
    return count;
}



void main(){
    //char *s = malloc(250 * sizeof(char));
    char s[250];
    printf("\n Insert a string... \n");
    gets(s);
    char c;
    printf("\n Insert the char to search... \n");
    scanf("%c", &c);
    int count = countOccurrence(&s, c);
    printf("\n The char %c appears %d times in the string.", c, count);
}


