#include<stdio.h>
#include<conio.h>
void main(){
    int i=1, num, j;                    //initialization
    while(i<6){                //while(condition)
        printf("%d. While Loop Example!\n", i);
        i++;                    //iteration
    }
    printf(" Enter a number: ");
    scanf("%d", &num);
    j=1;
    while(j<=10){
        printf("%d X %d = %d\n",num, j, num*j);
        j++;
    }

    getch();
}
/*
    *while Loop
    *do while Loop
    *for Loop

    init;
    while(condition){
            statements;
            iteration;
    }
*/
