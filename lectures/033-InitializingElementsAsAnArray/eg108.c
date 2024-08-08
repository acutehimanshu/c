#include<stdio.h>
int main(){
    int x[10] = {0, [2 ... 4] = 10,20,30, 0}; 
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
0
0
10
10
10
20
30
0
0
0
*/