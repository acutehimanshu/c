#include<stdio.h>
void sam(int p[]){ // should be treated as int *p
    printf("%lu\n", sizeof(p));
    // some code
}
int main(){
    int x[5];
    // some code
    sam(x);
    // some code
    return 0;
}

/*

Compile response:
 warning: sizeof on array function parameter will return size of 'int *' instead of 'int[]' [-Wsizeof-array-argument]
    printf("%lu\n", sizeof(p));
                          ^
eg117.c:2:14: note: declared here
void sam(int p[]){
             ^
1 warning generated.

Output: 
8
*/