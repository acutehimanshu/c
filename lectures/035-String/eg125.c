#include<stdio.h>
int main()
{
    char m[7]; // one extra for string terminator
    m[0]='U';
    m[1]='J';
    m[2]='J';
    m[3]='A';
    m[4]='I';
    m[5]='N';
    m[6]='\0'; // very very important to end the string with string terminator
    printf("%s\n", m);
    return 0;
}
/*
UJJAIN
*/