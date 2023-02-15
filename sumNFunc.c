#include<stdio.h>
#include<conio.h>
void main(){
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum=naturalSum(n);
    printf("Sum: %d", sum);

    getch();
}

int naturalSum(int num){
    if(num==0){
        return 0;
    }
    else{
        return num+naturalSum(num-1);
    }
}
