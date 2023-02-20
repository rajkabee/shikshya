#include<stdio.h>
#include<conio.h>
struct student{
    int id;
    char name[50];
};
void main(){
    int i, n;
    struct student *ptr;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("%dth student: \n", i+1);
        printf("id: ");
        scanf("%d",&(ptr+i)->id);
        printf("Name: ");
        scanf("%s", &(ptr+i)->name);
    }
    for(i=0; i<n; i++){
        printf("%d. %s\n",(ptr+i)->id,(ptr+i)->name);

    }
    getch();
}
