#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char ch;
    char name[40], fname[20], lname[20];
    int i,j;
    //printf("Enter a character: ");
    //ch=getch();
    //ch=getc(stdin);
    //printf("ch = %c", ch);

    //printf("Enter your name: ");
    //scanf("%[^\n]s", &name);
    //gets(name);
   // printf("Your name: %s", name);
    //puts(name);


    printf("Enter your first name: ");
    scanf("%s", &fname);
    printf("Enter your lname: ");
    scanf("%s",&lname);
    /*
    for(i=0; fname[i]!='\0'; i++){
        name[i]=fname[i];
    }
    //printf("i=%d\n", i);
    name[i]=' ';
    i++;
    for(j=0; lname[j]!='\0'; j++){
        name[i]=lname[j];
        i++;
    }
    name[i]='\0';
    */
    strcpy(name, fname);  //copy fname to name;
    strcat(name, " ");
    strcat(name, lname);    //concatenate lname to name;
    printf("full name: %s", name);

    printf("\n comparing two strings: \n");
    if(strcmp(fname, lname)>0){
        printf("%s", fname);
    }
    else{
        printf("%s", lname);
    }

    getch();
}
