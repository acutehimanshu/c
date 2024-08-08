#include<stdio.h>
// the following example is useless unless int sz is added to list of parametrs.

void sam(int p[5]){ // should be treated as void (int *p)
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
warning: sizeof on array function parameter will return size of 'int *' instead of 'int[5]' [-Wsizeof-array-argument]
    printf("%lu\n", sizeof(p));
                          ^
eg119.c:2:14: note: declared here
void sam(int p[5]){ // should be treated as int *p
             ^

------> here 5 is insignificant, it will be removed. 
//  eventually same as 117 example. 
1 warning generated.
Output: 
8
*/