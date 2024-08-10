#include<stdio.h>
int main(){
    char m;
    m = 'A';
    printf("'A' Code is %d\n", m);

    m = '0';
    printf("'0' Code is %d\n", m);

    m = 0;
    printf(" 0 only Code is %d\n", m);

    m = '\0';
    printf(" \\0 Code is %d\n", m);
    return 0;
}

/*

'A' Code is 65
'0' Code is 48
 0 only Code is 0
 \0 Code is 0
 
 */