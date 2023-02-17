#include<stdio.h>
#include<conio.h>

struct student{
    int id;
    char name[50];
    float percentage;
} st[3];
void main(){
    int i;
    //struct student st;
    st[0].id=123;
    strcpy(st[0].name, "Mahesh Maskey");
    st[0].percentage = 87.5;
    st[1].id=124;
    strcpy(st[1].name, "Purnika Shrestha");
    st[1].percentage = 56.5;
    st[2].id=125;
    strcpy(st[2].name, "Subarna Karki");
    st[2].percentage = 72.5;
    for(i=0; i<3; i++){
        printf("%d. %s\t%.2f\n", st[i].id, st[i].name, st[i].percentage);
    }
    getch();
}

