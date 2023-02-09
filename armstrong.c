#include<stdio.h>
#include<conio.h>
void main(){
    int num, temp, dig, rem, i, powV, armVal;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp=num;
    dig=0;
    while(temp!=0){
        temp=temp/10;
        dig++;
    }
  //  printf("No. of digits: %d\n", dig);
    armVal=0;
    temp=num;               //1234
    while(temp!=0){
        rem=temp%10;
        i=0;
        powV=1;
        while(i<dig){
            powV*=rem;
            i++;
        }
        armVal+=powV;
        temp/=10;
    }

   // printf("Armstrong Value: %d", armVal);

    if(armVal==num){
        printf("Armstrong Number ");
    }
    else{
        printf("Not Armstrong Number ");
    }

    getch();
}
