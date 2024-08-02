#include<stdio.h>
int main(){
    int x;
    int y[5];
    int z[10][20];
    char m;
    char k[5];
    char g[10][20];
    // printf("%d\n", sizeof(x)); //8
    printf("%lu\n", sizeof(&x)); //8
    printf("%lu\n", sizeof(&y)); //8
    printf("%lu\n", sizeof(&z)); //8
    printf("%lu\n", sizeof(&m)); //8
    printf("%lu\n", sizeof(&k)); //8
    printf("%lu\n", sizeof(&g)); //8
    return 0;
}