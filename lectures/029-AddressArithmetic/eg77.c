#include<stdio.h>
int main(){
    int x[5];

    printf("Address of x[0] is %lu\n", &x[0]);
    printf("Address of x[0]) + 1  is %lu\n", &x[0]+1);

    printf("Address of x is %lu\n", &x);
    printf("Address of x) + 1  is %lu\n", &x+1);
    return 0;
}


/*

Address of x[0] is 6137131316
Address of x[0]) + 1  is 6137131320 // Differnce of 4
Address of x is 6137131316
Address of x) + 1  is 6137131336 // difference of 20

*/