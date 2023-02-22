#include<stdio.h>
#include<conio.h>
void main(){
    FILE *fp;
    char name[20], str[50];
    printf("Name: ");
    scanf("%[^\n]s", &name);
    fp=fopen("test.txt", "a+");
    fprintf(fp, "Name: %s", name);
    fseek(fp,0, SEEK_SET);
    fscanf(fp, "%[^\n]s", &str);
    fclose(fp);
    /*
    fp=fopen("test.txt", "r");
    fscanf(fp, "%[^\n]s", &str);
    fclose(fp);
    */
    printf("Data: %s", str);
    getch();
}

