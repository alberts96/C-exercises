#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

/*
Exercise 3 (10 points). [double lists] Implement in C a double linked list, where each element of the list
has both a prev and a next pointer, respectively to the previous and to the next element in the list. Each
element of the list stores also an integer value. Write a C program that:
1. Asks the user to input a number n greater than 100;
2. Generates n random numbers, between -200 and 200, and inserts them (one at a time) in
increasing order in a double linked list (i.e., in the end the elements in the list must be sorted in
increasing order);
3. Prints the content of the list, with the integers in the list separated by a single space.
Example: -90 → -45 → -22 → -1 → 20 → 34 → 42 → …
*/

typedef struct node{
    struct node* prev;
    int value;
    struct node* next;
} node;



void insert(struct node* head, int d){
    struct node* newnode = (node*)malloc(sizeof(node));
    if (head -> next != NULL){
        head -> next ->prev = newnode;
    }
    newnode -> next = head -> next;
    newnode -> prev = head;
    head -> next = newnode;
    newnode -> value = d;
    struct node* current = (node*)malloc(sizeof(node));
    current = newnode;
    current -> next = newnode -> next;
    while (current -> next != NULL && current -> next -> value < d){
        current -> value = current -> next -> value ;
        current = current -> next;
        current -> value = d;
    }
};








void main(){
    int n;
    printf("Insert a number greater than 100 pls ... \n");
    scanf("%d", &n);
    int i = 0;
    int d;
    srand(time(0));
    struct node* head = malloc(sizeof(node));
    head -> next = NULL;
    for( i = 0; i < n; i++){
        d = rand() % 400 - 200;
        insert(head, d);
    }
    struct node* current = malloc(sizeof(node));
    current = head;
    for(i = 0; i < n; i++){
        printf("%d ", current -> next -> value);
        current = current -> next;
    }

     printf("\n\n");

    //prova all' incontrario
    for(i = 0; i < n; i++){
        printf("%d ", current -> value);
        current = current -> prev;
    }

}
