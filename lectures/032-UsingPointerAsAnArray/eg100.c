#include<stdio.h>
int main(){
    int x[5];
    x[100000] = 200;
    printf("%d\n", x[100000]); 
    return 0;
}

/*

zsh: segmentation fault  eg

*/