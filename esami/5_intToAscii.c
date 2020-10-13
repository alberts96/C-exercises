#include<stdio.h>
#include<malloc.h>

 /*
 Exercise 3. Let ​intToAscii(n) be a C function that takes as input an integer between 0 and 127, and
 returns the corresponding ​ASCII character ​ . For instance,
 intToAscii(44) ​​returns​ ‘,’

 Write a C program that:

     1. Asks the user to input an integer ​n​ > 99;
     2. Randomly generates ​n integers between 0 and 127, storing them into a dynamically allocated list  L​ of ​n​ ​struct ​ containing three fields:
            a. value​: the value of the randomly generated integer;
            b. ASCIIvalue​: the result of ​intToAscii(value)​​;
            c. next​: a pointer to the next element in the list
     3. Prints the content of the list ​L​.
     4. Deletes from ​L​ all elements having an odd value.
      5. Prints again the content of the list ​L​.
*/

char intToAscii(int n){
  return n;
}


typedef struct ascii{
    int value;
    char ASCIIvalue;
    struct ascii* next;
} ascii;

void main(){
    //1
    printf("Insert an integer greater than 99 pls... \n");
    int size;
    scanf("%d", &size);
    //2
    ascii *L = malloc(size * sizeof(ascii));
    ascii *node ;
    int i;
    for(i = 0; i < size; i++){
        int n = rand()%127;
        L[i].value =  n;
        L[i].ASCIIvalue = intToAscii(n);
        L[i].next = &L[i+1];
    } L[i].next =NULL;
    //3

    for (node = &L[0]; node->next != NULL; node = node->next){
        printf(" %d->",node->value);
        printf("'%c' ",node->ASCIIvalue);
    }   printf("\n");
    node->next = &L[0];
    //4
    i = 0;
    int j = 0;
    for (i = 0; i + j <= size; i++){
        if ( L[i].value % 2 != 0){
            j++;
            L[i] = L[i+j];
            L[i-1].next = &L[i];
        }
    }
    L = realloc(L, size - j);
    L[size-j].next = NULL;
    printf("ciao");
    //5
      for (node = &L[0]; node->next != NULL; node = node->next){
        printf(" %d->",node->value);
        printf("%c ",node->ASCIIvalue);
    }   printf("\n");

}
