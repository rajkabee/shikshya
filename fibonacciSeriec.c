#include<stdio.h>
#include<conio.h>
void main(){
    int n1=0, n2=1, n3;
    int range, n;
    printf("Enter the range of fibonacci series: ");
    scanf("%d", &range);

    while(n1<=range){
        n3=n1+n2;
        printf("%d\n", n1);
        n1=n2;
        n2=n3;
    }
    n1=0;
    n2=1;

    printf("Enter the fibonacci series count: ");
    scanf("%d", &n);
    while(n!=0){
        printf("%d\n", n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
        n--;
    }

    getch();
}
