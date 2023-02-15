#include<stdio.h>
#include<conio.h>
void increment(int x[3]);
void main(){
    int x[3]={1,2,3};

    printf("%d,%d,%d\n", x[0], x[1], x[2]);
    increment(x);
    printf("%d,%d,%d\n", x[0], x[1], x[2]);

    getch();
}

void increment(int x[3]){
    x[0]=23;
    x[1]=52;
    x[2]=78;
    printf("%d,%d,%d\n", x[0], x[1], x[2]);
}
