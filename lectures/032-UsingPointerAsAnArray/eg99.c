#include<stdio.h>
int main(){
    int x[5];
    int y;
    int *p; 
    p = x;
    p[0] = 100; 
    p++; //increaseing the value of P here 
    p[0] = 200; 
    p[1] = 300; 
    p[2] = 400; 
    p[3] = 500; 
    for(y=0; y<5; y++){
        printf("%d\n", x[y]);
    }
    return 0;
}