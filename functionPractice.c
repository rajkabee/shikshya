#include<stdio.h>
#include<conio.h>
int main(){
    int d;
    d=digits(12345);
    printf("Number of digits: %d", d);
    return 0;
}


int digits(int num){
    int dig=0;
    while(num!=0){
        dig++;
        num/=10;
    }
    return dig;
    //printf("Number of digits: %d", dig);
}
