#include<stdio.h>
int main(){
    int x[][5] = {
        {10,20,30},
        {40,50,60},
        {70,80,90,100}
    };
    int r,c;
    for(r=0; r<3 ; r++){
        for(c=0; c<5 ; c++){
            printf("%4d", x[r][c]);
        }
        printf("\n");
    } 
    return 0;
}

/*
  10  20  30   0   0
  40  50  60   0   0
  70  80  90 100   0
*/