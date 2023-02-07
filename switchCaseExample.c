#include<stdio.h>
#include<conio.h>
void main(){
    /*
    switch(var){
    case value:
        statements;
    default:
        statement;

    }
    */
    char ch;
    printf("------MENU------\n");
    printf("a. Expresso\n");
    printf("b. Cappuccino\n");
    printf("c. Cafe Latte\n");
    printf("d. Mochaccino\n");
    printf("Make a choice: ");
    ch=getch();
    //scanf("%c", &ch);
    //printf("%c", ch);
    switch(ch){
    case 'a':
        printf("Expresso is served!");
        break;
    case 'b':
        printf("Cappuccino is served!");
        break;
    case 'c':
        printf("Cafe Latte is served!");
        break;
    case 'd':
        printf("Mochaccino is served!");
        break;
    default:
        printf("Invalid Choice!");

    }

}
