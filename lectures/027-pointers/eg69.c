#include<stdio.h>
int main(){
    int x, y;
    int *z;
    x = 10; // correct
    y = 20; // correct
    z = 50; // Incorrect trying to assign int to int * type container
    z = x;  // Incorrect trying to assign int to int * type container
    x = &z; // Incorrect trying to assign int ** to int  type container
    z = &x; // correct
    z = &y; // correct
    return 0;
}

/*

eg69.c:7:7: error: incompatible integer to pointer conversion assigning to 'int *' from 'int' [-Wint-conversion]
    z = 50; // Incorrect trying to assign int to int * type container
      ^ ~~
eg69.c:8:7: error: incompatible integer to pointer conversion assigning to 'int *' from 'int'; take the address with & [-Wint-conversion]
    z = x;  // Incorrect trying to assign int to int * type container
      ^ ~
        &
eg69.c:9:7: error: incompatible pointer to integer conversion assigning to 'int' from 'int **' [-Wint-conversion]
    x = &z; // Incorrect trying to assign int ** to int  type container
      ^ ~~
3 errors generated.
*/