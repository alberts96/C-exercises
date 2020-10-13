#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

/*
Let ​removeDuplicates() be a C function that takes in input an array ​vect of integer
 and returns a new array ​new_vect​ that contains all and only the elements in ​vect​ with no repetitions.
 Example: (5, 3, 2, 5, −6, 2) → (5,3,2,−6)
The function takes in input a pointer to ​vect​, an integer containing its​size​, and a pointer to an integer called
size_new that will contain the size of ​new_vect​. In case of multiple occurrences of an element in​vect​, just
 maintain its first occurrence in ​new_vect​. Write a C program that:
    1. Asks the user to input an integer ​n​ > 99, that will be the size of ​vect​;
    2. Dynamically​ creates ​vect​ of size ​n​, and populates it with random integers, between -5 and 5;
    3. Print the content of the array ​vect as follows: the elements are all printed on the same line,
        separated by a single space (add a newline at the end);
    4. Call the function ​removeDuplicates()​ on the array ​vect​;
    5. Print the content of the array​new_vect​(all elements printed on the same line, separated by a single    space).
    */
int *removeDuplicates(int *vect, int dim, int *new_dim){
    int i;
    int j;
    int n = dim / sizeof(int);
    int *new_vect = malloc(dim);
    int key;
    /*allocation of memory for the new array,
    it will be resized at the end of the loop,
    It's better than to resize for each iteration*/
    int m = 0; // number of elements in the new array
    for(i = 0; i < n; i++){
        key = vect[i];
        for (j = 0; j < m && new_vect[j] != vect[i]; j++){}
        if ( j == m){
            new_vect[m] = key;
            m++;
        }
    }
    *new_dim = sizeof(int) * m;
    new_vect = realloc(new_vect, *new_dim);
    return new_vect;
}



void main (){
    printf("Please insert a number greter than 99 ... \n");
    int n;
    scanf("%d", &n);
    int dim = sizeof(int) * n;
    int i;
    int *vect = malloc(dim); //dynamic allocation of memory
    for(i = 0; i < n; i++){
        vect[i] = -5 + rand()%10;
        printf("%d ", vect[i]);
    }
    printf("\n");
    int *new_dim = &dim;
    int *new_vect = removeDuplicates(vect, dim, new_dim);
    n = *new_dim / sizeof(int);
    for(i = 0; i < n; i++){
        printf("%d ", new_vect[i]);
    }
}



