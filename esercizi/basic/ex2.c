
#include <stdio.h>
#include <string.h>
// cl ex2.c


int bytes(){
	
	printf("Inserisci un numero");
	int input;
	scanf("%d",input);
	int size = sizeof(typeof(input));
	return size;


}


main(){
	printf("%d",bytes());
}
	