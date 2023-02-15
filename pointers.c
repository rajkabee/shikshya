#include<stdio.h>
#include<conio.h>
void main(){
    int x=34;
    int *p=&x;
    printf("Value of x: %d\n", x);
    printf("Address of x: %d\n", &x);
    printf("Value of p: %d\n", p);
    printf("Address of p: %d\n", &p);
    printf("value at the address pointed by p: %d", *p);
    getch();
}
