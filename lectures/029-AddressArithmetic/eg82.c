#include<stdio.h>
int main(){
    int x[5];
    int y,t;
    int *p;
    for(p=0,y=0; y<=4 ; y++,p++){
        printf("Enter a number: ");
        scanf("%d", p);
    }
    p=&x[0];
    t=0;
    for(y=0;y<=4;y++){
        t=t+*p;
        p++;
    }
    printf("Total is %d\n", t);
    return 0;
}