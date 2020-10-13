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


struct node* insert(node* a, int v){
    node* b = (node*) malloc(sizeof(node));
    b->value = a->value;
    b->next = a->next;
    a->value = v;
    a->next = b;
    return a;
}

void append(node* a, int v){
    node* z = (node*) malloc(sizeof(node));
    z->value = v;
    z->next=NULL;
    node* x = (node*) malloc(sizeof(node));
    x = a;
    while (x->next != NULL){
        x = x->next;
    }
    x->next = z;
}

struct node* drop(node* head, int v){
    if (head->value == -v){
    node* newhead = (node*) malloc(sizeof(node));
    newhead =  head->next;
    free(head);
    return newhead;
    }
    node* i = head;
    while ( i->next->value != -v && i->next->next != NULL){
        i = i->next;
    }
    if(i->next->value != -v){
        printf("   Not found in the list!!");
    }
    else{
        if(i->next->next != NULL){
            i->next = i->next->next;
           // free(i->next);

        }
        else{
            //free(i->next);
            i->next = NULL;
        }
    }
    return head;
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
    printf("Inserisci un intero positivo... \n");
    scanf("%d", &n);
    n.next = NULL;
    node *head =(node*) malloc(sizeof(node));
    head = &n;
    int v = 1;
    while (v != 0){
        printf("Inserisci un intero... \n");
        scanf("%d", &v);
        if (v < 0){head = drop(head,v);}
        if (v > 0 && v % 2 == 0){head = insert(head, v);}
        if (v > 0 && v % 2 != 0){append(head, v);}
         print(head);
    }

}
