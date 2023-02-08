#include<stdio.h>
#include<conio.h>
void main(){
    int range, sum=0;
    printf("Enter the range: ");
    scanf("%d", &range);
    while(range!=0){
        sum=sum+range;
        range--;
    }
    printf("Sum: %d", sum);
    getch();
}
