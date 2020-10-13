#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

/*
Exercise 3. Let intToAscii(n) be a C function that takes as input an integer between 0 and 127, and
returns the corresponding ASCII character. For instance,
intToAscii(44) returns ‘,’
Write a C program that:
    1. Asks the user to input an integer n > 99;
    2. Randomly generates n integers between 0 and 127, storing them into a dynamically allocated
       list L of n struct containing three fields:
           a. value: the value of the randomly generated integer;
           b. ASCIIvalue: the result of intToAscii(value);
           c. next: a pointer to the next element in the list
    3. Prints the content of the list L.
*/
char intToAscii(int n){
  return n;
}


typedef struct node{
    int value;
    char ASCIIvalue;
    struct node* next;

}node;



void main(){
    printf("Insert a number greater than 99 pls... \n");
    int n;
    scanf("%d", &n);
    node* L = malloc(n * sizeof(node));
    int i;
    int v;
    char c;
    node* current =  malloc(sizeof(node));
    for(i = 0; i < n; i++){
       v = rand()%127;
       c = intToAscii(v);
       current -> value = v;
       current -> ASCIIvalue = c;
       current -> next = &L[i+1];
       L[i] = *current;
    }current -> next = NULL;
    for( current -> next = &L[0]; current -> next != NULL; current = current -> next){
        printf("%d->'%c' ", current->value, current -> ASCIIvalue);

    }
}
