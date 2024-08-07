#include<stdio.h>
int main(){
    int x[4][3];
    int j;
    j=x;
    // x represents a collection hence will become &x[0]
    // incorrect, &x[0] is of type int (*)[3] and j is of type int

    j=x[0];
    //x[0] represents a collection hemce it will become &x[0][0]
    // incorrect, &x[0][0] is of type int * and j is of type int

    j=x[0][0]; // correct

    j=&x;
    // incorrect, &x is of type int (*)[4][3] and j of type int.
    return 0;
}

/*
eg88.c:20:6: error: incompatible pointer to integer conversion assigning to 'int' from 'int[4][3]' [-Wint-conversion]
    j=x;
     ^~
eg88.c:21:6: error: incompatible pointer to integer conversion assigning to 'int' from 'int[3]' [-Wint-conversion]
    j=x[0];
     ^~~~~
eg88.c:23:6: error: incompatible pointer to integer conversion assigning to 'int' from 'int (*)[4][3]' [-Wint-conversion]
    j=&x;
     ^~~
3 errors generated.
*/