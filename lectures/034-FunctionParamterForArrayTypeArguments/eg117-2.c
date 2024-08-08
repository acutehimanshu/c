#include<stdio.h>
void sam(int p[], int sz){ // should be treated as (int *p, int sz)
    printf("%lu\n", sizeof(p));
    // some code
}
int main(){
    int x[5];
    // some code
    sam(x, 5); // ideally we should pass the size otherwise how can we determine the size?
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