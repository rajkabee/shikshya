#include<stdio.h>
#include<conio.h>
void main(){
    int num, i, flag;
    char choice;
    do{
        printf("Enter a number:");
        scanf("%d", &num);

        if(num<2){
            printf("Neither prime nor composite!");
        }
        else{
            flag=0;
            for(i=2; i<=num/2; i++){
                if(num%i==0){
                    flag=1;
                    //break;
                }
            }
            if(flag==0){
                printf("Prime Number!");
            }
            else{
                printf("Composite!");
            }
        }
        do{
            printf("Do you want to continue(y/n)?");
            scanf(" %c", &choice);
        }while(!(choice=='y'||choice=='n'));

    }while(choice=='y');
    getch();
}
