#include<stdio.h>
void sam(int p[][3], int rows){ // shoule be trated as sam(int (*p)[3], int rows)
    printf("%lu\n", sizeof(p));
    
}
int main(){
    int x[5][3];
    // some code
    sam(x, 5); // should be treated as sam(&x[0]) // we should pass rows to get the size of rows
     // some code
    return 0;
}

/*
Compiler:

eg118.c:3:27: warning: sizeof on array function parameter will return size of 'int (*)[3]' instead of 'int[][3]' [-Wsizeof-array-argument]
    printf("%lu\n", sizeof(p));
                          ^
eg118.c:2:14: note: declared here
void sam(int p[][3]){ // shoule be trated as sam(int (*p)[3])
             ^
1 warning generated.

output:
8
*/