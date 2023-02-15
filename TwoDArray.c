#include<stdio.h>
#include<conio.h>
void main(){
    int arr[3][4]={{1,2,3,4},{4,5,6,7},{7,8,9,0}};
    int i,j;
    // int a[]={1,2,3,4,5};
    //printf("%d",arr[1][2] );
    arr[2][3]=10;
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    getch();
}
