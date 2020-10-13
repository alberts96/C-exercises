#include <stdio.h>
#include <stdlib.h>

/*Exercise 3 (10 points). Write a C program that:
  1. Asks the user to input a number ​n ​ greater than 50;
  2. Build a ​list of integers containing ​n elements, with randomly generated values between -200 and  800;
  3. Prints the content of the list
  4. Then, sorts the values in the list, in increasing order.
     No extra data structures can be used (i.e., do not store the values in an array to sort them);
  5. Prints the content of the sorted list.
*/


void main(){
    printf("Insert a number greater than 50 pls... \n");
    int n;
    int i;
    int j;
    int t;
    int min;
    srand(time(NULL));
    scanf("%d", &n);
    //build the list
    int a[n];
    for (i = 0; i < n; i++){
        a[i] = rand()%1000 - 200;
    }
    //selection sort
    for(i = 0; i < n - 1; i++){
		min=i;
		for (j=i+1;j < n; j++){
			if (a[j] < a[min]){min = j;}
		}
        t = a[min];
	    a[min] = a[i];
        a[i] = t;
	}

	//stampo l 'array
	 for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
