#include<stdio.h>
#include<conio.h>
void main(){
    int x[3]={1,2,3};
    increment(&x);
    getch();
}
void increment(int *p){
    printf("%d, %d, %d", *p, *(p+1), *(p+2));
}


int x[5]={8,6,9,2,5};
