#include<stdio.h>
int main(){
    // the follwing Declation is incorrect
    // first can be empty but renst can not be
    // becase we can put dufferent number of values in dirrect row
    int x[][] = {
        {10,20,30},
        {40,50,60},
        {70,80,90,100}
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
 error: array has incomplete element type 'int[]'
    int x[][] = {
         ^
1 error generated.
*/