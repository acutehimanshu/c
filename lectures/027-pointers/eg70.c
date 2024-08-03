#include<stdio.h>
int main(){
    int x,y;
    int *z;
    x = 30;
    z = &x;
    *z = 575;
    printf("%d\n", x);
    x = 300;
    printf("%d\n", *z);
    z = &y;
    *z = 959;
    printf("%d\n", y);
    y = 400;
    printf("%d\n", *z);
    z = NULL;
    return 0;
}