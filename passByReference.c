#include<stdio.h>
#include<conio.h>
void increment(int *p);
void main(){
    int x = 34;
    printf("value of x: %d\n", x);
    increment(&x);
    printf("value of x: %d\n", x);
    getch();
}

void increment(int *p){
    *p+=100;
    printf("value of x in increment function: %d\n", *p);
}
