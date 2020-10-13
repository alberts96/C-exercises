
#include <stdio.h>
#include <stdlib.h>

/*
Exercise 3 (10 points).

 The ​Triangle Number Series is a sequence of ​triangle numbers ​ ;
 the n​th triangle number is the number of  dots or balls in a triangle with n dots on a side,
 and it is the sum of the n natural numbers from 1 to n  (that is, ).​
 ​Write a C program that: ∑ n i=1 i
    1. Asks the user to input a number ​n ​ greater than 100;
    2. Build a ​list of integers containing ​n elements, with randomly generated values between -200 and  400, ​but not -1​;
    3. Then, assigns the value -1 to all elements in the list whose position in the list belongs to the Triangle Number Series.

 Example ​ : ​-1​ → 77 → ​-1​ → -44 → 200 → ​-1​ → 109 → -22 → 88 → ​-1​ → ….

 */

int* triangleSeq(int n){
    int *seq = malloc(sizeof(int) * n);
    int i = 1;
    int last = 1;
    seq[0] = 1;
    printf("\ntriangleseq\n");
    while (last < n){
        last = seq[i -1] + i + 1;
        seq[i] = last;
        printf("%d ", seq[i]);
        i++;

    }
    seq = realloc(seq, i * sizeof(int));
    return seq;
}

void main(){
    printf("Insert a number greater than 100 pls... \n");
    int n;
    int i;
    scanf("%d", &n);
    int* triangle = triangleSeq(n);
    int list[n];
    srand(time(NULL));
    printf("\n\n list \n");
    //building the list
    for(i = 0; i < n; i++){
        list[i] = rand() % 600 - 200;
        while ( list[i] == -1){   // -1 is denied
            list[i] = rand() % 600 - 200;
        }
        printf("%d ", list[i]);
    }
    printf("\n\n list with -1 \n");
    //substituting -1 in the position using the traignleseq;
    int j = 0;
    for(i = 0; i < n; i++){
        if (i + 1 == triangle[j]){
            list[i] = -1;
            j++;
        }
    }
    //print the list
    for(i = 0; i < n; i++){
        printf("%d ",list[i]);
    }
}
