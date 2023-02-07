#include<stdio.h>
#include<conio.h>
void main(){
    /*
    if(condition){
        stratment;
    }
    */
    int ch;
    printf("------MENU------\n");
    printf("1. Expresso\n");
    printf("2. Cappuccino\n");
    printf("3. Cafe Latte\n");
    printf("4. Mochaccino\n");
    printf("Make a choice: ");
    scanf("%d", &ch);
    if(ch==1){
        printf("Expresso is served!");
    }
    else if(ch==2){
        printf("Cappuccino is served!");
    }
    else if(ch==3){
        printf("Cafe Latte is served!");
    }
    else if(ch==4){
        printf("Mochaccino is served!");
    }
    else{
        printf("Invalid Choice!");
    }

    getch();
}
