#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>



/*Write a program that reads an integer N and then N words (one per line).
 The program prints ﬁrst all palindrome words (in the same order they have been inserted)
and then all the others (again in the same order they have been inserted).
Assumption: each word has length of at most 40 chars.
Hint: to dynamically allocate an array of strings:
    • ﬁrst allocate an array of char *;
    • for each position of the array, allocate memory to store a single string.
*/

#define MAX_SIZE 40

int palindrome(char s[MAX_SIZE]){
    int len = strlen(s) - 1 ;
    int i = 0;
    char temp;
    while (i <= floor(len / 2 ) && s[i] == s[len ]){
        i++;
    }
    if (i == floor(len / 2)){return 1;}
    else                    {return 0;}
}




void main(){
    int n;
    printf("How many string are you gonna insert?\n");
    scanf("%d", &n); //adding \n on scanf read also a  new line, use it whe you have to use also gets after
    char **list = malloc(n * sizeof(char[40]));
    int i = 0;
    int j = n;
    while (i + 1 <= j ){
        printf("\n Insert a word pls... \n");
        char s[40];
        scanf("%s", s);
        if (palindrome(s) == 1){
            list[i] = s;
            i++;
        }
        else{
            list[j] = s;
            j--;
        }
        printf("%d,%d", i , j);
    }
    printf("\n\n Ordered list is:\n");
    for (i = 0; i < n; i++){

        printf("%d", i);
        printf("\n %s \n", list[i]);
    }
}
