#include<stdio.h>
int main(){
    int x;
    printf("Address of x is %lu\n", &x);
    printf("Address of x) + 1  is %lu\n", &x+1);
    printf("Address of x is %lu\n",&x);
    printf("Address of x) - 10  is %lu\n", &x-10);
    return 0;
}

/*
Address of x is 6132920648
Address of x) + 1  is 6132920652
Address of x is 6132920648
Address of x) - 10  is 6132920608
*/