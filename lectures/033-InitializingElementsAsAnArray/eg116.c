#include<stdio.h>
int x[4];
int main(){
    int r;
    for(r=0; r<3 ; r++){
        printf("%4d\n", x[r]);
    } 
    return 0;
}

/*
0
0
0
0
*/