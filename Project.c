#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct Student{
    int id;
    char name[50];
    float percentage;
};


void getNewStudentsDetails(struct Student *s);

void main(){
    struct Student st;
    char filename[50];
    char ch;
    FILE *fp;

    strcpy(filename, "students.bin");
    do{
        printf("-----MENU-----\n");
        printf("a. add student\n");
        printf("b. view a student\n");
        printf("c. view all students\n");
        printf("d. update a student\n");
        printf("e. delete a student\n");
        printf("Choice: ");
        scanf(" %c",&ch);
        switch(ch){
        case 'a':
            printf("Add a Student\n");
            getNewStudentsDetails(&st);
            fp=fopen(filename, "a+");
            fwrite(&st, sizeof(struct Student), 1, fp);
            fclose(fp);

            break;
        case 'b':
            printf("View a Student\n");
            printf("Enter the id: ");
            scanf("%d", &id);
            //search for the student in the file

            break;
        case 'c':
            printf("View All Student\n");

            break;
        case 'd':
            printf("Update a Student\n");

            break;
        case 'e':
            printf("Delete a Student\n");

            break;

        default:
            printf("Invalid Choice!");
        }
        do{
            printf("Do you want to continue(y/n):");
            scanf(" %c", &ch);
        }while(!(ch=='y'||ch=='n'||ch=='Y'||ch=='N'));

    }while(ch=='y'||ch=='Y');
}


void getNewStudentsDetails(struct Student *s){
    printf("Enter the student's details:\n id: ");
    scanf("%d", &s->id);
    printf("Name: ");
    scanf(" %[^\n]s", &s->name);
    printf("Percentage: ");
    scanf("%f", &s->percentage);
}
