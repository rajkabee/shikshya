#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k;
    int a[3][3]={{1,2,3},{4,5,6}, {7,8,9}};
    int b[3][3]={{9,8,7},{6,5,4},{3,2,1}};
    int p[3][3];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            p[i][j]=0;
            for(k=0; k<3; k++){
                p[i][j]+=a[i][k]*b[k][j];
            }

        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }

    getch();
}
