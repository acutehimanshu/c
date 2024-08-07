#include<stdio.h>
int main(){
    int x[5], y;
    int *p;
    p=x; // shoule be treated as p=&x[0];
    *p=100;
    p++;
    *p=200;
    p++;
    *p=300;
    p++;
    *p=400;
    p++;
    *p=500;
    for(y=0;y<=4;y++){
        printf("%d\n", x[y]);
    }
    return 0;
}

/*
100
200
300
400
500*/
