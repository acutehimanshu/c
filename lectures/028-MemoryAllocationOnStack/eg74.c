#include<stdio.h>
int main(){
    printf("%lu\n", sizeof(long unsigned int));
    printf("%llu\n", sizeof(long long unsigned int));
    return 0;
}

/*
Windows:
--------

4
8

Linux
-----
Warning: (printf("%llu\n", sizeof(long long unsigned int));)
format %llu expects argument of type long long unsigned in but argument 2 has type long unsigned int

8
8
*/
