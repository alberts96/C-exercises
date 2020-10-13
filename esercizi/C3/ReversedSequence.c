#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Exercise
//Write a program that reads from the keyboard a sequence of 10 integers,
// and writes the same sequence in reverse order, dividing by 2 the even elements of the sequence.
/*void main (){
    int a[10];
    int *p;
    p = a; //uso un puntatore
    int i = 0;
    printf("inserisci dieci interi...   ");
    for( ;i<10;i++ ){
        printf("inserisci il numero in posizione %d :   ",i+1);
        scanf("%d",p);
        p++;
    }
    i--;
    for(;i>=0;i--){
        if (a[i] % 2 == 0){printf("%d - ",a[i]/2);}
        else              {printf("%d - ",a[i]);}
    }
 */
void main (){
    int a[10];
    int *p = a; //uso un puntatore

    printf("inserisci dieci interi...   ");
    for( ; p!=&a[10] ;p++ ){
        printf("inserisci un numero...   ");
        scanf("%d",p);
    }
    p--;
    for(;p!=&a[0];p--){
        if (*p % 2 == 0){printf("%d - ",*p/2);}
        else              {printf("%d - ",*p);}
    }
}
