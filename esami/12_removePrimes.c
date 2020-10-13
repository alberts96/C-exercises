#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

/*
Exercise 3. Let ​removePrimes() be a C function that takes as input an array of integers, removes all
numbers that are prime, and returns the compacted version of the array. In particular, write a C program that:
 1. Asks the user to input an integer ​n​ > 200;
 2. Creates an array of 200 integers, and fills it with randomly generated numbers between 7 and 13 (extremes included);
 3. Prints the content of the array and its size (elements separated by whitespace, all on the same  line);
 4. Calls ​removePrimes()​ on the just filled array. 5. Prints the content and the size of the array returned by ​removePrimes()​.

 Example​: Array: 7 9 8 8 13 11 11 9 10 → 9 8 8 9 10
 */

 void removePrimes(int *vect, int *dim){
    int j = 0;
    int i;
    int k;
    int newvect[*dim / sizeof(int)];
    for(i = 0; i < *dim / sizeof(int); i++){
        k = 2;
        while (k <= vect[i] && vect[i] % k != 0){
            k++;
        }
        if (k != vect[i]){
            newvect[j] = vect[i];
            j++;
        }
    }
    *dim = j * sizeof(int);
    for(i = 0;  i < j; i++){
        vect[i] = newvect[i];
    }
    vect = realloc(vect, *dim);
 }



 void main (){
    printf("Please insert a number greter than 200 ... \n");
    int n;
    scanf("%d", &n);
    int *dim = malloc(sizeof(int));
    *dim = sizeof(int) * n;
    int i;
    int *vect = malloc(*dim); //dynamic allocation of memory
    //insert valuesizeof(int)
    for(i = 0; i < *dim / sizeof(int) ; i++){
        vect[i] = 7 + rand()%7;
    }
    //print values
    for(i = 0; i < *dim / sizeof(int); i++){
        printf("%d ", vect[i]);
    }
    removePrimes(vect, dim);
    //print values
    printf("\n\n");
    for(i = 0; i < *dim / sizeof(int); i++){
        printf("%d ", vect[i]);
    }
    printf("\n The size now is %d", *dim / sizeof(int));
 }

