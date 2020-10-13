
#include <stdio.h>
#include <string.h>
// cl countOcc.c
 


main (){
	char s[1000] ;
    char c ;
	printf("Please enter a word...");
	scanf("%s",s);
	printf("please enter a char...");
	scanf("%s",c)
	int count = 0 ;
	int i;
	for(i=0;i<=strlen(s);i++){
		if (s[i] == c) {count++;}
	}
	printf("the char %c occurs %d times in the string %s" ,c,count,s);
	return count;
}