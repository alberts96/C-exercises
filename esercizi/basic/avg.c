#include <stdio.h>
#include <string.h>


main(){
	int n1=0;
	int n2=0;
	int n3=0;
	int sum = 0;
	printf("Inserisci 3 numeri");
	scanf("%d%d%d", &n1, &n2, &n3);
	int avg = (n1 + n2 + n3) / 3 ;
	printf("la media è %d",avg);
	}