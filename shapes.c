#include<stdio.h>
#include<conio.h>
void main(){
    int i, j;
    printf("Rectangle: \n");
    for(j=0; j<5; j++){
        for(i=0; i<5; i++){
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n");
    printf("Triangle 1: \n");
    for(j=0; j<5; j++){
        for(i=0; i<=j; i++){
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n");

    printf("Triangle 2: \n");
    for(j=0; j<5; j++){
        for(i=0; i<5-j; i++){
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n");

    printf("Triangle 3: \n");
    for(j=0; j<5; j++){
        for(i=0; i<j; i++){
            printf("   ");
        }
        for(i=0; i<5-j; i++){
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n");

    printf("Triangle 4: \n");
    for(j=0; j<5; j++){
        for(i=0; i<4-j; i++){
            printf("   ");
        }
        for(i=0; i<=j; i++){
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n");


    printf("Pyramid: \n");
    for(j=0; j<5; j++){
        for(i=0; i<4-j; i++){
            printf("   ");
        }
        for(i=0; i<=j; i++){
            printf("*  ");
        }
        for(i=0; i<j; i++){
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n");

     printf("Diamond: \n");
    for(j=0; j<5; j++){
        for(i=0; i<4-j; i++){
            printf("   ");
        }
        for(i=0; i<=j; i++){
            printf("*  ");
        }
        for(i=0; i<j; i++){
            printf("*  ");
        }
        printf("\n");
    }
    for(j=0; j<4; j++){
        for(i=0; i<=j; i++){
            printf("   ");
        }
        for(i=0; i<4-j; i++){
            printf("*  ");
        }
        for(i=0; i<3-j; i++){
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n");
    getch();
}
