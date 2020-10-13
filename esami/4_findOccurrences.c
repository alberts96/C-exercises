

/*Exercise 4(8points).Let ​findOccurrences()be a C function that takes in input two arrays​ vect1​ and​ vect2
of integers, and their sizes ​size1 and ​size2 respectively, and returns a new array ​res of size ​size1​.
The i-th  element in ​res​ contains the number of occurrences of ​vect1[i]​ in ​vect2​.
 Example: vect1: (5, 3, 2, 5, −6, 2), vect2: (0, 5, 5, 5, -1, 2, 2) → res: (3, 0, 2, 3, 0, 2)

Write a C program that:
 1. Asks the user to input two integers ​size1 > 99 and ​size2 > 99, that will be the sizes of ​vect1 ​and vect2​ respectively;
 2. Dynamically creates array ​vect1 of size ​size1​, array ​vect2 of size ​size2​, and populates them with random integers, between -7 and 7;
 3. Print the content of the arrays ​vect1 and ​vect2​as follows: the elements of each array are all printed on the same line,
      separated by a single space (add a newline at the end of all the elements of each array);
 4. Call the function ​findOccurrences()​ on the arrays ​vect1 ​and ​vect2​;
 5. Print the content of the array ​res ​(all elements printed on the same line, separated by a single space)*/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

//functiojn to count the number of ocurrence of a integer k in a vectore vect of integers
int countOccurrence(int *vect, int k, int size ){
    int i;           // index
     int count = 0;  // this is to count ocurrence
    for(i = 0; i < size; i++){
        if (vect[i] == k){
            count++;
        }
    }
    return count;

}

int *findOccurrence(int *vect1, int size1, int *vect2, int size2){
    int* res = malloc(sizeof(int) * size1);
    int i;
    for(i = 0; i < size1; i++){
        res[i] = countOccurrence(vect2, vect1[i], size2);
    }
    return res;
}


void main(){
    int i; //necessary index to iterate over vectors

    //first vector
    int size1;
    printf("Please insert an integer greter than 99 for the size of the first vector... \n");
    scanf("%d", &size1);
    int *vect1 = malloc(sizeof(int) * size1);

    //second vector
    int size2;
    printf("Please insert an integer greter than 99 for the size of the second vector... \n");
    scanf("%d", &size2);
    int *vect2 = malloc(sizeof(int) * size2);

    //print the two vectors
    for(i = 0; i < size1; i++){
        vect1[i] = rand()%14 - 7  ;
        printf("%d ", vect1[i]);
    }   printf("\n\n");
    for(i = 0; i < size2; i++){
        vect2[i] = rand()%14 - 7 ;
        printf("%d ", vect2[i]);
    }   printf("\n\n\n");


    int *res = findOccurrence(vect1, size1, vect2, size2);
      for(i = 0; i < size1; i++){
        vect2[i] = rand()%14 - 7 ;
        printf("%d ", res[i]);
    }
}
