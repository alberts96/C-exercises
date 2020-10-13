#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    char ASCIIvalue;
    struct node *next;
}node;


char intToAscii(int num);
int Randoms(int lower, int upper);
node *generateList(int n);
void printList(node *head);



void main(){
	int n;
	printf("Integer < 60: ");
	scanf("%d", &n);
    
	node* head = generateList(n);
	printList(head);

}
	
char intToAscii(int num){
	return (char)num;
}

int Randoms(int lower, int upper) 
{ 
	int num;
    num = (rand() % (upper - lower + 1)) + lower;
	return num; 
} 

node *generateList(int n)
{
    int i = 0;
    node *head = NULL;
    node *temp = NULL;
    node *p = NULL;
    
    for (i=0; i<n; i++){
        temp = (node*) malloc(sizeof(node));
        temp -> value = Randoms(0,127);
        temp -> ASCIIvalue = intToAscii(temp->value);
        temp -> next = NULL;
    
       if (head == NULL){
        head = temp;
       }
       else{
           p = head;
           while (p->next != NULL)
               p=p->next;
           p->next=temp;
       }
   }
   return head;
}


void printList(node *head){
    node *temp;
    temp = head;
    if (temp==NULL){
        printf("List is empty \n");
    }
    else{
        while (temp != NULL){
            printf("%c ", temp->ASCIIvalue);
            temp = temp->next;
        }
        printf("\n");
    }
    
}

