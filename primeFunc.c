#include<stdio.h>
#include<conio.h>
int prime(int n);
void main(){
    int num, flag;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num<2){
        printf("The number is neither prime nor composite!");
    }
    else{
        flag=prime(num);
        if(flag==1){
            printf("composite");
        }
        else{
            printf("Prime");
        }
    }
    getch();
}
int prime(int n){
    int i;
    for(i=2; i<=n/2; i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}

