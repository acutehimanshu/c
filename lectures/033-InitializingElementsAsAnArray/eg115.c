#include<stdio.h>
int main(){
    int x[][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90,100} // wrong, as it has 5 elements and 3 is the number of columns
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
warning: excess elements in array initializer [-Wexcess-initializers]
        {70,80,90,100}
                  ^~~
1 warning generated.
*/