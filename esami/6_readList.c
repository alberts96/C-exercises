#include<stdio.h>
#include<malloc.h>


typedef struct node{
    int info;
     struct node* next;
}node;


node* readList(int n){

    int i = 1;
    node* current = (node*) malloc(sizeof(node));
    node* head = (node*) malloc(sizeof(node));
    head = current;
    while (i < n ){
         current->next = (node*) malloc(sizeof(node));
         current = current->next;
         current->info = rand()%1000;
         i++;
    }
    current->next = (node*) malloc(sizeof(node));
    current = current->next;
    current->info = 0;
    current->next = NULL;
    return head;

}

void main(){
    printf("Insert a number greater than 99 pls... \n");
    int n;
    scanf("%d", &n);
    node* head = (node*) malloc(sizeof(node));
    head = readList(n);
    node* current;
    for(current = head->next; current->next != NULL; current = current->next){
        printf("%d ", current->info);
    }printf("\n");
}
