#include<stdio.h>
#include<conio.h>
void main(){
    int i, n, j, res;
    printf("Enter the range: ");
    scanf("%d", &n);
    for(i=1; i<=n;i++){
        res=0;
        for(j=1; j<=i; j++){
            res+=j;
        }
        printf("%d\n", res);
    }

}
