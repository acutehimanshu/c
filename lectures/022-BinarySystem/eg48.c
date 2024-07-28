#include<stdio.h>
int main()
{
    int x;
    x = 2147483659;
    printf("%d\n", x);
    x = -2147493660;
    printf("%d", x);
    return 0;
}

/*
THIS IS WARNING NOT ERROR:
eg48.c:5:5: warning: implicit conversion from 'long' to 'int' changes value from 2147483659 to -2147483637 [-Wconstant-conversion]
x = 2147483659;
  ~ ^~~~~~~~~~
eg48.c:7:5: warning: implicit conversion from 'long' to 'int' changes value from -2147493660 to 2147473636 [-Wconstant-conversion]
x = -2147493660;
  ~ ^~~~~~~~~~~
2 warnings generated.

 */