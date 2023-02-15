#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=0; i<15; i++){
        for(j=1; j<16; j++){
            printf("%c%d\t", i+65,j);
        }
        printf("\n");
    }

}
