#include<stdio.h>
#include<conio.h>
void main(){
    /*
    byte b;
    b=127;
    printf("byte b = %d", b);
    */
    short s = 32768;
    printf("short s = %d", s);
    int i=2345321;
    long l=5432456l;

    float f = 1.234f;
    double d = 1.23454;
    printf("\nfloat f=%0.2f \ndouble d=%f", f, d);

    char ch='h';
    printf("\nchar ch = %c", ch);

}
//comment
/*
    Variables = container for values
    Integer
        byte    8bits   11111111=255    -128 to +127
                            00000000=0
        short   16bits  -32768 to 32767

        int        32bits   -2.14billions

        long    64bits      9.223 bb
    Float
        float   32bits
        double 64bits

    Character
        char    16bits
    Boolean
        bool    true/false
*/


