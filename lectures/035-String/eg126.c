#include<stdio.h>
int main()
{
    char m[] = {'U', 'J', 'J','A','I','N', '\0'}; 
    printf("%s\n", m);
    printf("Number of elemts in m %lu\n", sizeof(m)/ sizeof(m[0]));
    return 0;
}
/*
UJJAIN
Number of elemts in m 7
*/