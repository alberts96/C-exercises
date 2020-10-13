#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
/*Write a C program, that contains a function diff abs that takes as arguments 2 ﬂoat (a and b)
 and whose invokation is such that the variable corresponding to the ﬁrst argument contains the value a - b,
  while the variable corresponding to the second argument contains b - a.
Print the content of the 2 variables after the execution of the function, with a precision up to the second decimal digits.*/

float* diff_abs(float a, float b){
    float* diff =  malloc(sizeof(float)*2);
    diff[0] = a - b;
    diff[1] = b - a;
    return (diff);
}


void main() {
    printf("Inseriscidue due float ... \n \n");
    float a;
    float b;
    printf("Inserisci il primo float... \n \n");
    scanf("%f", &a);
    printf("Inserisci il secondo float... \n \n");
    scanf("%f", &b);
    float* diff = diff_abs(a, b);
    printf("Le differenze sono: %.2f e %.2f" , diff[0], diff[1]) ;  // %.2f id the format for only two decimal digits

}
