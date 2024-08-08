#include<stdio.h>
int main(){
    int x[10] = {[0 ... 9] = 2030}; // space before and after ... is importnat
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

*/