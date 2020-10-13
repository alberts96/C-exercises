#include<stdio.h>
#include<malloc.h>

/*Exercise 2. Let A be an array of strings of size n, whose elements can only be the strings: {“true”, “maybe”,
“false”}. Also, let
void sortB(char **A, n)
be a C function that, given in input A and n, sorts the strings in A in linear time (i.e., O(n) time) such that all
strings “false” are before “maybe”, and all strings “maybe” are before “true”.
Example: A: (maybe, false, true, true, maybe, false) → A: (false, false, maybe, maybe, true, true)
Write a C program that:
1. Asks the user to input an integer n > 99, that will be the size of A;
2. Dynamically creates an array of strings A of size n, and randomly populates it with the strings
“true”, “maybe”, “false”;
3. Print the content of the array A as follows: the elements of A are all printed on the same line,
separated by a single space (add a newline at the end of all the elements of A);
4. Call the function sortB(char **A, n) on the array A;
5. Print again the content of the array A (all elements printed on the same line, separated by a single
space).*/

/*void sortB(char **A, int n){
    int i = 0;
    int j = n;
    int k = 0;
    while (i < j){
        if ( A[i] == "true"){
            swap(A[i],A[j]);
            j--;
        }
        else{
            if (A[i] == "false"){
                swap(A[i], A[k]);
                k++;
                i++;
            }
            else{
                i++;
            }
        }
    }
*/

void sortB(char **A, int n){
    int i = 0;
    int j = n-1;
    while (i < j){
        if ( A[i] != "false"){
            swap(&A[i],&A[j]);
            j--;
        }
        else{i++;}
    }
    j = n;
    while (i < j){
        if ( A[i] != "maybe"){
            swap(&A[i],&A[j]);
            j--;
        }
        else{i++;}
    }
}


void swap(char** a, char** b){
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}

void main(){
    printf("Insert a number greater than 99 pls... \n");
    int n;
    scanf("%d", &n);
    char **array = (char **) malloc(n*sizeof(char *));
    int i;
    int v;
    for(i = 0; i < n; i++){
        v = rand()%3;
        switch (v){
            case 0:
            array[i] = "true";
            break; //causa l'uscita immediata dallo switch
            case 1:
            array[i] = "false";
            break;
            case 2:
            array[i] = "maybe";
            break;
        }
        printf("%s ",array[i]);
    }printf("\n");
    sortB(array, n);
    for(i = 0; i < n; i++){
        printf("%s ",array[i]);
    }

}
