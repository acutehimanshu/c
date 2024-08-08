#include<stdio.h>
int main(){
    int x[3] = {10,20,30};
    int y;
    printf("Number of Elenebts in array is %lu\n", sizeof(x)/ sizeof(x[0]));
    y = 0;
    while(y<3){
        printf("%d\n", x[y]);
        y++;
    }
    return 0;
}

/*
10
20
30
*/