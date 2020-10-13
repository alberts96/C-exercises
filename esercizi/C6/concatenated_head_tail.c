#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

/*
Implement a concatenated list that contains, as data, positive integers.
Implement three functions, to:
                                • Add an element at the end of the list;
                                • Add an element to the beginning of the list;
                                • Given a positive value v, delete the ﬁrst node of the list that hasv as data
                                  (do not modify the list if it does not contain v);

Then, write a C program that read integers.For each integer, (and in the same order),
apply one of the following:
                                • If the read value v is < 0, remove from the list the ﬁrst element equal to |v|
                                  (do not modify the list if it does not contain |v|);
                                • If the read value v is > 0 and even, add it at the beginning of the list;
                                • If the read value v is > 0 and odd, add it at the end of the list;
                                • If the read value v is = 0, terminate the execution of the program, printing,
                                  from the beginning to the end, all elements of the list.
*/


typedef struct node{
    int value;
    struct node* next;
} node;


struct node* insert(node* old_head, int v){
    node* new_head = (node*) malloc(sizeof(node));
    new_head->value = v;
    new_head->next = old_head;
    return new_head;
}

struct node* append(node* old_tail, int v){
    node* new_tail = (node*) malloc(sizeof(node));
    new_tail->value = v;
    new_tail->next = NULL;
    old_tail->next = new_tail;
    return new_tail;
}

struct node* drop(node* head,node* tail, int v){
    node* head_tail[2];
    if (head->value == -v){
        printf("%d\n",head->value);
        printf("%d\n",head->next->value);
        head =  head->next;
        printf("%d\n",head->value);
        printf("%d\n",head->next->value);
        head_tail[0] = head;
        head_tail[1] = tail;
        return head_tail;
    }
    node* i = head;
    while ( i->next->value != -v && i->next->next != NULL){
        i = i->next;
    }

    i->next = i->next->next;
    head_tail[0] = head;
    head_tail[1] = tail;
    return head_tail;
}


void print(node *head){
     node *i = head ;
    while ( i!= NULL){
        printf(" %d ", i->value);
        i = i->next;
    }
}


void main(){
    node n;
    printf("\n Inserisci un intero positivo... \n");
    scanf("%d", &n.value);
    n.next = NULL;
    node* head_tail = (node*) malloc(2 *sizeof(node*));
    node *head =(node*) malloc(sizeof(node));
    node *tail =(node*) malloc(sizeof(node));
    head = &n;
    tail = &n;
    int v ;

    while (v != 0){
        printf("\n Inserisci un intero... \n");
        scanf("%d", &v);
        if (v < 0){head_tail = drop(head, tail, v);
                        }
        if (v > 0 && v % 2 == 0){head = insert(head, v);}
        if (v > 0 && v % 2 != 0){tail = append(tail, v);}
        print(head);
    }

}
