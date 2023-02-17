#include<stdio.h>
#include<conio.h>

union var{
    int num;
    char string[50];
    char ch;
    float f;
};

void main(){
    union var x;
    x.num=123;
    printf("x.num=%d\n", x.num);
    strcpy(x.string,"Hello, How are you?");
    printf("x.string = %s\n", x.string);
    x.num=123;
    printf("x.num=%d\n", x.num);
    printf("x.string = %s\n", x.string);
    getch();
}
