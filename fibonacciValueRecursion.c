#include<stdio.h>
#include<conio.h>
void main(){
    int n, res;
    printf("Enter the value of n for nth fibonacci value: ");
    scanf("%d", &n);
    res=fib(n);
    printf("%dth fibonacci value: %d", n, res);
    getch();
}

int fib(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
/*
fib(5)
fib(4)+fib(3)
fib(3)+fib(2)+fib(2)+fib(1)
fib(2)+fib(1)+fib(2)+fib(2)+fib(1)
1+0+1+1+0
3

0
1
1
2
3
*/
