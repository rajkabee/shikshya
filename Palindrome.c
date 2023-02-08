#include<stdio.h>
#include<conio.h>
void main(){
    int num, rev=0, rem, temp;              //rev=54321
    printf("Enter a number: ");
    scanf("%d", &num);          //0
    temp=num;               //12345
    while(num!=0){
        rem = num%10;       //3
        rev = rev*10+rem;
        num/=10;
    }
    //printf("Reverse: %d", rev);

    if(rev==temp){
        printf("palindrome!");
    }
    else{
        printf("not a palindrome!");
    }
    getch();
}
