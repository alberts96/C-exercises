#include <stdio.h>
#include <string.h>

main(){
	printf("Inserisci un numero");
	int input;
	scanf("%d",&input);
	int size = sizeof(typeof(input));
	printf("%d",size);


}
