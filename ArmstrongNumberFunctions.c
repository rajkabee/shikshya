
#include<stdio.h>
#include<conio.h>
int digits(int);
int digits(int);
int armStrong( int);
int main(){
    int num, armV;
    printf("Enter a number: ");
    scanf("%d", &num);
    armV=armStrong(num);

    if(armV==num){
        printf("\n armstrong Number");
    }
    else{
        printf("\n not armstrong Number");
    }
    return 0;
}

int armStrong(int n){
    int d, rem, armV;
    d=digits(n);
    printf("Number of digits: %d", d);

    armV=0;
    while(n!=0){
        rem=n%10;
        armV+=power(rem, d);
        n/=10;
    }
    return armV;
}


int digits(int num){
    int dig=0;
    while(num!=0){
        dig++;
        num/=10;
    }
    return dig;
}

int power(int b, int p){
    int res=1;
    while(p!=0){
        res*=b;
        p--;
    }
    return res;
}


