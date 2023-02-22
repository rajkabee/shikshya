#include<stdio.h>
#include<conio.h>
void main(){
    char school[50];
    char buffer[200];
    int i;
    FILE *fp;
    printf("school: ");
    scanf("%[^\n]s", &school);

    fp = fopen("school.txt", "w");
    for(i=0; school[i]!='\0'; i++){
        fputc(school[i],fp);
    }
    fseek(fp, 0, SEEK_SET);
    i=0;
    do{
        buffer[i]=fgetc(fp);
        printf("%d\n",i);
        if( feof(fp) ) {
             break ;
          }
        i++;
    }while(1);
    printf("buffer: %s", buffer);
    fclose(fp);


    getch();
}
