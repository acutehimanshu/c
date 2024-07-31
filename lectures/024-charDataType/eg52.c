#include<stdio.h>
int main(){
    char m;
    m = 48;
    while(m<=57){
        printf("Code: %d\tCharacters: %c\n", m, m);
        m++;
    }

    m = 65;
    while(m<=90){
        printf("Code: %d\tCharacters: %c\n", m, m);
        m++;
    }

    m = 97;
    while(m<=122){
        printf("Code: %d\tCharacters: %c\n", m, m);
        m++;
    }

    return 0;
}