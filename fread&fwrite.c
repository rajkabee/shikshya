#include<stdio.h>
#include<conio.h>
void main(){
    char address[50];
    char buffer[200];
    FILE *fp;
    printf("address: ");
    scanf("%[^\n]s", &address);

    fp = fopen("address.txt", "a+");
    fwrite(address, sizeof(address), 1, fp);
    fseek(fp, 0, SEEK_SET);
    fread(buffer, sizeof(buffer), 4, fp);
    printf("buffer: %s", buffer);
    fclose(fp);


    getch();
}
