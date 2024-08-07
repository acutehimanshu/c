#include<stdio.h>
int main(){
    int x[4][3];
    int (*p)[3];
    int *j;
    printf("Address of x is %lu\n", &x);
    p=x; // will become &x[0] and datatype of &x[0] is int (*)[3]
    printf("Address of x[0] is %lu\n", &x[0]);
    printf("p=x, will become p=&[x], addres p is %lu\n", p);
    p++; // arithmetic will be performed as p = p + (sizeof(int[3]) *1)
    printf("Address of x[1] is %lu\n", &x[1]);
    printf("p++, Address in p is %lu\n", &p);
    p++; // arithmetic will be performed as p = p + (sizeof(int[3]) *1)
    printf("Address of x[2] is %lu\n", &x[2]);
    printf("p++, Address in p is %lu\n", &p);
    return 0;
}

/*

Address of x is 6156350712
Address of x[0] is 6156350712
p=x, will become p=&[x], addres p is 6156350712
Address of x[1] is 6156350724   // diff of 12
p++, Address in p is 6156350696
Address of x[2] is 6156350736
p++, Address in p is 6156350696

*/