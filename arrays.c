#include<stdio.h>
#include<conio.h>
void main(){
    int arr[100], i;
    int num[]={65,45,34,58,97};
    arr[0]=12;
    arr[1]=34;
    arr[2]=51;

    arr[9]=12;
    for(i=0; i<100; i++){
        arr[i]=i*i+i*4;
    }
    for(i=0; i<100; i++){
        printf("%d, ",arr[i]);
    }
    getch();
}
