/* ​Write a C function called ​removeNeg() that ​takes in       
input an array of integers ​vect​, its size ​dim​, and a pointer to int called ​new_dim​. The function
modifies the array ​vect ​as follows: for each occurrence ​of a negative number in ​vect​, (i) it replaces    
a with its absolute value; and (ii) it adds at the end of the array an element containing the absolute
value of ​a​. For instance, assuming that ​a is at position ​i of ​vect​, we will have that ​vect[i] will be
transformed into a positive number, and a new element will be added at the end of ​vect​, containing
the absolute value of ​vect[i]​. The insertion of the elements at the end of the array must follow the
order of the corresponding negative numbers in ​vect​.  The function ​returns the new array after the resize,
and writes the size of the resized array at the address pointed by ​new_dim​.
 Example ​ : [4 -1 2 -3] → [4 1 2 3 1 3]
 Test the function in the ​main()​, as follows:
 1. Ask the user to input an integer ​n​, that will be the size of an array;
  2. Dynamically create an array ​arr of size ​n​, and populate it with random integers, between-100 and 100;
   3. Print the content of the array ​arr as follows: the elements are all printed on the same line,
        separated by a single space (add a newline at the end);
    4. Call the function ​removeNeg()​ on the array ​arr​;
     5. Print again the content of the array ​arr (that at this time should have been modified by removeNeg()​) */

#include <stdio.h>
#include <stdlib.h>


int *removeNeg(int *vect, int dim, int *new_dim){
    int i;
    *new_dim = dim ;
    for( i = 0; i < dim / sizeof(int); i++){
        if (vect[i] < 0){
            vect[i] = -vect[i];
            *new_dim += sizeof(int);
            vect = realloc(vect, *new_dim );
            vect[*new_dim/sizeof(int) - 1] = vect[i];
        }
        else{vect[i] = vect[i];}
    }
    return vect;
}



void main(){

    printf(" please enter a number.. ");
    int n;
    scanf("%d",&n);
    int dim = sizeof(int) * n;
    int *vect = malloc(dim);
    int i;
    for(i = 0; i < n; i++){
        vect[i] = -100+rand()%200;
        printf("%d ", vect[i]);
    }
    printf("\n");
    int *new_dim = &dim;
    vect = removeNeg(vect, dim, new_dim);
    n = *new_dim / sizeof(int);
    for(i = 0; i < n; i++){
        printf("%d ", vect[i]);
    }

}
