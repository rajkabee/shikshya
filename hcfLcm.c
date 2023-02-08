#include<stdio.h>
#include<conio.h>
void main(){
    int a, b, hcf, lcm, x,y, rem;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);      //a=16, b=18
    /*
    hcf=a<b?a:b;
    while(!(a%hcf==0 && b%hcf==0)){
        hcf--;
    }
    */
    x=a;        //16
    y=b;        //18
    while(x%y!=0){
        rem=x%y;        //2
        x=y;                //16
        y=rem;              //2
    }
    hcf=y;

    printf("HCF: %d", hcf);

    /*
    lcm=a>b?a:b;
    while(!(lcm%a==0 && lcm%b==0)){
        lcm++;
    }
    */
    lcm=(a*b)/hcf;
    printf("\nLCM: %d", lcm);
    getch();
}
