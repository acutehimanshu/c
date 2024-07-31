#include<stdio.h>
int main()
{
    char m ;
    m = 128;
    if(m == 128){
        printf("Value of m is 128\n");
    }else{
        printf("Value of m is not 128\n");
    }
    if(m == -128){
        printf("Value of m is -128\n");
    }else{
        printf("Value of m is not -128\n");
    }
    return 0;
}


/**
 * @Output
Value of m is not 128
Value of m is -128;



warning: 
eg53.c:5:9: warning: implicit conversion from 'int' to 'char' changes value from 128 to -128 [-Wconstant-conversion]
    m = 128;
      ~ ^~~
eg53.c:6:10: warning: result of comparison of constant 128 with expression of type 'char' is always false [-Wtautological-constant-out-of-range-compare]
    if(m == 128){
       ~ ^  ~~~
2 warnings generated.
 * 
 */