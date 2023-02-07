#include<stdio.h>
#include<conio.h>
void main(){
    //byte b=127;
    short s = -32768;
    printf("Short s: %d \n ", s);
    int i = 2140000000;
    printf("int i: %d \n", i);
    long l = 97812714l;
    printf("long l: %d \n", l);
    float f=1.2345f;
    printf("float f: %0.3f \n", f);
    double d = 1.234553;
    printf("double d: %f \n", d);

    char ch='5';
    printf("char ch: %c \n",ch);

    //boolean b=false;
    getch();
}
//comments
/*
    Variables:
    Containers for data(Values);

    Strictly typed:

    Integer
        byte    00000000=0, 11111111=255    (-128 to +127)
        short   16bits, -32768 to +32767
        int       32bits, 2.14b
        long    64bits, 9.223bb

        1111
        =1*1+1*2+1*4+1*8
        =15

    Float
        float   32bits
        double  64bits

    Character
        char 16bits;    A-Z, a-z, 0-9;

    Boolean
        boolean     true or false

*/
