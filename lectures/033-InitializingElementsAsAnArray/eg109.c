#include<stdio.h>
int main(){
    int x[10] = {[3] = 10, [0 ... 2] = 50}; 
    int y;
    printf("Number of Elenebts in array is %lu\n", sizeof(x)/ sizeof(x[0]));
    y = 0;
    while(y<=9){
        printf("%d\n", x[y]);
        y++;
    }
    return 0;
}

/*
50
50
50
10
0
0
0
0
0
*/