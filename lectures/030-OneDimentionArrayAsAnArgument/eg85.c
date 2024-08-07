#include<stdio.h>
int main(){
    int x[5];
    int y;
    y = &x[0];
    y = x;
    printf("%lu\n", sizeof(x));
    printf("%lu\n", sizeof(&x[0]));
    return 0;
}

/*
eg85.c:5:7: error: incompatible pointer to integer conversion assigning to 'int' from 'int *'; remove & [-Wint-conversion]
    y = &x[0];
      ^ ~~~~~
eg85.c:6:7: error: incompatible pointer to integer conversion assigning to 'int' from 'int[5]' [-Wint-conversion]
    y = x;
      ^ ~
2 errors generated.
*/