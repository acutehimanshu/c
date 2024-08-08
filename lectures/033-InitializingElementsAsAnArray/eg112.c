#include<stdio.h>
int main(){
    int x[4][3] = { 10,20,30 , 40,50,60, 70,80,90,100,110,120 };
    int r,c;
    for(r=0; r<4 ; r++){
        for(c=0; c<3 ; c++){
            printf("%4d", x[r][c]);
        }
        printf("\n");
    } 
    return 0;
}

/*
  10  20  30
  40  50  60
  70  80  90
 100 110 120

 We can intialize in one line but to print we need two variables r & c
*/