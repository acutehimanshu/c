#include<stdio.h>
int main(){
    int x[4][3] = {
        {10,20,30},{40,50,60},{[0 ... 2 ] = 1040},{}
    };
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
104010401040
   0   0   0
*/