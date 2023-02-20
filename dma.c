#include<stdio.h>
#include<conio.h>
void main(){
    int i, *ptr, size;
    printf("Enter the no. of data: ");
    scanf("%d", &size);
    ptr = calloc(size,sizeof(int));
/*    for(i=0; i<size; i++){
        printf("%dth data: ", i+1);
        scanf("%d", ptr+i);
    }   */
    printf("the data you entered are: ");
    for(i=0; i<size; i++){
        printf("%d\t", *(ptr+i));
    }
}
