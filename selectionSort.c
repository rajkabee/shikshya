#include<stdio.h>
#include<conio.h>
void main(){
    int arr[5]={9,7,5,3,1};
    int i, k, j;
    for(k=0; k<5; k++){
        printf("%d\t", arr[k]);
    }
    printf("\n");
    for(i=0; i<4; i++){
        for(j=i+1; j<5; j++){
            if(arr[i]>arr[j]){
                arr[i]+=arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]-=arr[j];
            }
            for(k=0; k<5; k++){
                printf("%d\t", arr[k]);
            }
            printf("\n");
        }
    }
    getch();
}

