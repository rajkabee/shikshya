#include<stdio.h>
#include<conio.h>
void main(){
    int p;
    char grade;
    printf("Enter your percentage:");
    scanf("%d", &p);
    grade=p>=80?'A':p>=60?'B':p>=40?'C':'F';
    printf("your grade: %c", grade);
    getch();
}
