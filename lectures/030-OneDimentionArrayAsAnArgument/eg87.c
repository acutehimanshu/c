#include<stdio.h>
int sum(int *p, int sz){
    int y,t;
    for(y=0,t=0;y<sz;y++,p++){
        t=t+*p;
    }
    return t;
}
int main(){
    int x[5];
    int y, total;
    for(y=0;y<5;y++){
        printf("Enter a number: ");
        scanf("%d", &x[y]);
    }
    // total = sum(x, 5);
    
    total = sum(x, sizeof(x) / sizeof(x[0]));
    printf("Total is %d\n", total);
    return 0;
}