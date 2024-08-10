#include<stdio.h>
int main()
{
    char m[] = {"Ujjain"};  // size of m will be of 7 elements
    // \0 will be added implicitly
    printf("%s\n", m);
    printf("Number of elemts in m %lu\n", sizeof(m)/ sizeof(m[0]));
    for(int y =0; y<=6; y++){
        printf("at %d index, number is %d & char is %c\n", y, m[y], m[y]);
    }
    return 0;
}
/*
Ujjain
Number of elemts in m 7
at 0 index, number is 85 & char is U
at 1 index, number is 106 & char is j
at 2 index, number is 106 & char is j
at 3 index, number is 97 & char is a
at 4 index, number is 105 & char is i
at 5 index, number is 110 & char is n
at 6 index, number is 0 & char is 
*/