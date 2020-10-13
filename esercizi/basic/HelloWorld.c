#include <stdio.h>

#define MATRICOLA  533967
#define AGE 23
#define HELLO(X,Y) "I'm %d y.o. and my matricola is %d .",X,Y

 
main ()
{
	printf(HELLO(AGE, MATRICOLA));
}