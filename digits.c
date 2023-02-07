#include<stdio.h>
#include<conio.h>
void main(){
    float num, dig=0;
    printf("Enter a number:");
    scanf(" %f", &num);
    while(num>=1){
        num=num/10;
        //printf("%f", num);
        dig+=1;
    }

    printf("\nnumber of digits: %0.0f",dig );
    getch();
}
