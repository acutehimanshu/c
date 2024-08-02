#include<stdio.h>
int main(){
    int x;
    int y[5];
    int z[10][20];
    char m;
    char k[5];
    char g[10][20];
    // printf("%d\n", sizeof(x)); //4
    printf("%lu\n", sizeof(x)); //4
    printf("%lu\n", sizeof(y)); //20
    printf("%lu\n", sizeof(z)); //800
    printf("%lu\n", sizeof(m)); //1
    printf("%lu\n", sizeof(k)); //5
    printf("%lu\n", sizeof(g)); //200
    printf("%lu\n", sizeof(int)); //4
    printf("%lu\n", sizeof(long unsigned int)); //4
    return 0;
}