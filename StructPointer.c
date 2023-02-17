#include<stdio.h>
#include<conio.h>
//struct student getStudentDetails();
void getStudentDetails();

struct student{
    int id;
    char name[50];
    float percentage;
} st[3];

void main(){
    int i;
    for(i=0; i<3; i++){
        printf("\nEnter the details of %d th student: \n", i+1);
        //st[i]=getStudentDetails();
        getStudentDetails(&st[i]);
        /*
        scanf("%d", &st[i].id);
        printf("Name: ");
        scanf(" %s", &st[i].name);
        printf("Percentage: ");
        scanf("%f", &st[i].percentage);
        */
    }


    for(i=0; i<3; i++){
        printf("%d. %s\t%.2f\n", st[i].id, st[i].name, st[i].percentage);
    }
    getch();
}
void getStudentDetails(struct student *s){
    printf("Id: ");
    scanf("%d", &s->id);
    printf("Name: ");
    scanf(" %s", &s->name);
    printf("Percentage: ");
    scanf("%f", &s->percentage);
    return s;
}


/*
struct student getStudentDetails(){
    struct student s;
    printf("Id: ");
    scanf("%d", &s.id);
    printf("Name: ");
    scanf(" %s", &s.name);
    printf("Percentage: ");
    scanf("%f", &s.percentage);
    return s;
}
*/
