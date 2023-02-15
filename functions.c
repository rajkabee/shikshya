#include<stdio.h>
#include<conio.h>
int add(int x, int y){
    int c;
    c=x+y;
    return c;
}
int subtract(){
    int diff,x,y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    diff=x-y;
    return diff;
}
void divide(int x, int y){
    int quotient;
    quotient=x/y;
    printf("Quotient: %d\n", quotient);
}
void multiply(){
    int p,x,y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    p=x*y;
    printf("Product: %d", p);
}
int main(){
    int a=6, b=7, sum, diff;
    sum=add(a,b);
    printf("sum= %d\n", sum);
    diff=subtract();
    printf("Difference: %d\n", diff);
    divide(34,5);
    multiply();
    getch();
    return 0;
}
