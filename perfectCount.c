#include<stdio.h>
#include<conio.h>
void main(){
    long num, i, pVal,count,j;
    printf("Enter number of perfect numbers: ");
    scanf("%d", &count);
    j=0;
    for(num=1; j<count; num++){
        pVal=0;
        for(i=1; i<num; i++){
            if(num%i==0){
                pVal+=i;
            }
        }
        if(pVal==num){
            printf("%d\n", pVal);
            j++;
        }
    }
   /*
    if(pVal==num){
        printf("Perfect Number");
    }
    else{
        printf("Not a Perfect Number");
    }
    */
    getch();
}
