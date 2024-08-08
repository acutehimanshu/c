#include<stdio.h>
int main(){
    int x[] = {10,20,30,40,50,60,70,80,90,100};
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
10
20
30
*/