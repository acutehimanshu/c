#include<stdio.h>
int main(){
    unsigned int x; // 1st is not sign bit
    x = 2147483659;
    printf("%d\n",x);  // %d means 1st sign and rest data
    printf("%u\n", x); // %u stands for unsigned int.
    return 0;
}

/*
output
-2147483637
2147483659
*/ 