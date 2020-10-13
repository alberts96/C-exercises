#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*Write a C program that reads an integer n and a ﬂoat x>0 and,
using a function sum pow (that you need to write)
 computes the sum of the power of x, from 0 to n
  (that is, the value s = x0 + x1 + x2 + ...+ xn).
   Print to the standard output the value returned by the function.
   Print the result with exactly two decimal digits.*/
float powersum( float f, int n){
    int i;
    float sum = 0;
    for(i = 0; i < n; i++){
        sum += pow(f, i);
    }
    return(sum);
}

void main() {
    printf("Inseriscidue un numero intero ed uno razionale(con la virgola)maggiore di zero... \n \n");
    int n;
    float f;
    printf("Inserisci intero... \n \n");
    scanf("%d", &n);
    printf("Inserisci umero con virgola... \n \n");
    scanf("%f", &f);
    printf("Power sum of %.2f is:  %.2f", f, powersum(f, n));  // %.2f id the format for only two decimal digits
}
