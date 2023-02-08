#include<stdio.h>
#include<conio.h>
void main(){
    int b, p, res=1;
    printf("Enter the base: ");
    scanf("%d", &b);
    printf("Enter the power: ");
    scanf("%d", &p);
    while(p!=0){
        res=res*b;
        p--;
    }
    printf("Result: %d", res);
}

