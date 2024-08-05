#include<stdio.h>
int main(){

    int x;
    int y;
    char m;
    int z;
    char g;
    char k;
    char u;
    int p;
    printf("Address of int type x is %p\n", &x);
    printf("Address of int type x is %llu\n", &x);
    printf("Address of int type y is %llu\n", &y);
    printf("Address of char type m is %llu\n", &m);
    printf("Address of int type z is %llu\n", &z);
    printf("Address of char type g is %llu\n", &g);
    printf("Address of char type k is %llu\n", &k);
    printf("Address of char type u is %llu\n", &u);
    printf("Address of int type p is %llu\n", &p);
    return 0;
}

/*
Address of int type x is 0061FF1C
Address of int type x is 18446744065126039324
Address of int type y is 18446744065126039320
Address of char type m is 18446744065126039319
Address of int type z is 18446744065126039312
Address of char type g is 18446744065126039311
Address of char type k is 18446744065126039310
Address of char type u is 18446744065126039309
Address of int type p is 18446744065126039304
*/