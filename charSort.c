#include<stdio.h>
#include<conio.h>
void main(){
    char arr[5]={'f','t','e','S','a'};
    int i,j,k;
    char temp;
    for(i=0; i<4; i++){
        for(j=0; j<4-i; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(k=0; k<5; k++){
        printf("%c\t", arr[k]);
    }

    getch();
}
