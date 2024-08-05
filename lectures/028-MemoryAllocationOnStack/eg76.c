#include<stdio.h>
void tom();
void sam(int);
void cat(int, int);
int main(){
    int x, y;
    printf("Main Start\n");
    printf("Address of int type x is %llu\n", &x);
    printf("Address of int type x is %llu\n", &y);
    tom();
    sam(10);
    printf("Main Ends\n");
    return 0;
}

void tom(){
    int a;
    char b;
    printf("tom Start\n");
    printf("Address of int type a is %llu\n", &a);
    printf("Address of char type b is %llu\n", &b);
    printf("Tom Ends\n");
}


void sam(int p){
    int q;
    char r;
    printf("Sam Start\n");
    printf("Address of int type p is %llu\n", &p);
    printf("Address of int type q is %llu\n", &q);
    printf("Address of char type r is %llu\n", &r);
    cat(100,100);
    printf("Sam Ends\n");
}

void cat(int p, int q){
    int r;
    char s;
    printf("cat Start\n");
    printf("Address of int type p is %llu\n", &p);
    printf("Address of int type q is %llu\n", &q);
    printf("Address of int type r is %llu\n", &r);
    printf("Address of char type s is %llu\n", &s);
    printf("cat Ends\n");
}

/*
Main Start
Address of int type x is 27583808989691676
Address of int type x is 27583808989691672
tom Start
Address of int type a is 14161709772177132
Address of char type b is 14161709772177131
Tom Ends
Sam Start
Address of int type p is 14161709772177152
Address of int type q is 14161709772177132
Address of char type r is 14161709772177131
cat Start
Address of int type p is 14161709772177104
Address of int type q is 14161709772177108
Address of int type r is 14161709772177084
Address of char type s is 14161709772177083
cat Ends
Sam Ends
Main Ends
*/