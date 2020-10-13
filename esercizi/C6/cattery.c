#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>





typedef struct{
    int code;
    int age;
    float weight;
    int food;
} cat;



void main(){
    enum foods{kibbles = 0, canned_food, tuna } ; // enum function to assciated ints to strings

    printf("Insert a number...   ");
    int n;
    scanf("%d",&n);
    int i =0;
    cat cattery[n];
    float avg_weight = 0;
    while ( i < n){
        printf("\n\n\n Insert code(int), age(int), weight(float), food (0,1,2)\n all together separated by a space\n\n");
        scanf("%d %d %f %d", &cattery[i].code, &cattery[i].age, &cattery[i].weight, &cattery[i].food);
        avg_weight += cattery[i].weight;
        i++;

    }
    avg_weight /=n;
    printf("\n\n\n\n Average weigth is %.2f \n\n",avg_weight);
    for (i = 0; i < n; i++){
        if (cattery[i].age <= 4 && cattery[i].weight >= avg_weight){
                int food_n = cattery[i].food; // should add the enum Foods and cal the related string ( but I don't know how to do )
                //char food_s[20] = foods(food_n);
                printf("\n\n%d %s", cattery[i].code, food_n);
            }
    }
}
