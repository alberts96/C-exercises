#include <stdio.h>
#include <string.h>

int average(int a[10]){
    int *p = a;
    int sum = 0;
    for( ; p!=&a[10] ;p++ ){
        sum += *p;
    }
    float avg = sum / 10 ;
    return (avg);
}

void main(){
    int i = 0;
    int a[10];
    while (i < 10){
        printf("inserisci un intero...   ");
        scanf("%d", &a[i]);
        i++;
    }
    float avg = average(a);
    printf("La media dei numeri inseriti �: %f",avg);

}
