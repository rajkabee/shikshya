#include<stdio.h>
#include<conio.h>

struct student{
    int id;
    char name[50];
    float percentage;
} st;
void main(){
    //struct student st;
    st.id=123;
    strcpy(st.name, "Purnika Shrestha");
    st.percentage = 87.5;
    printf("%d. %s\t%.2f", st.id, st.name, st.percentage);
    getch();
}

