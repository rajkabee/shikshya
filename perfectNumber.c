#include<stdio.h>
#include<conio.h>
void main(){
    int num, i, pVal;
    printf("Enter a number: ");
    scanf("%d", &num);
    pVal=0;
    for(i=1; i<num; i++){
        if(num%i==0){
            pVal+=i;
        }
    }
    //printf("Perfect Value: %d", pVal);
    if(pVal==num){
        printf("Perfect Number");
    }
    else{
        printf("Not a Perfect Number");
    }
    getch();
}
