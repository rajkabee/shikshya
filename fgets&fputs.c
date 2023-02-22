#include<stdio.h>
#include<conio.h>
void main(){
    char school[50];
    char buffer[200];
    FILE *fp;
    printf("school: ");
    scanf("%[^\n]s", &school);

    fp = fopen("school.txt", "a+");
    fputs(school, fp);
    fseek(fp, 0, SEEK_SET);
    fgets(buffer, 50, fp);
    printf("buffer: %s", buffer);
    fclose(fp);

    fgetc
    getch();
}
