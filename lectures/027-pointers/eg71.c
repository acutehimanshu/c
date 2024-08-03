#include<stdio.h>
void lmn(int p, int q, int *r, int *s){
    *r = p+q;
    *s = p-q;
}


int main(){
    int x,y,a,b;
    x = 10;
    y = 20;
    lmn(x,y,&a,&b);
    printf("Sum is %d\n", a);
    printf("Differnce  is %d\n", b);
    return 0;
}