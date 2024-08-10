#include<stdio.h>
int main()
{
    int m[6];
    //m = 'UJJAIN'; // incorrect
    //m = "UJJAIN"; // incorrect
    m[0]='U';
    m[1]='J';
    m[2]='J';
    m[3]='A';
    m[4]='I';
    m[5]='N';
    for(int y = 0; y<6; y++){
        printf("%c", m[y]);
    }
    return 0;
}
/*
eg120.c:5:9: warning: multi-character character constant [-Wmultichar]
    m = 'UJJAIN'; // incorrect
        ^
eg120.c:5:9: warning: character constant too long for its type
eg120.c:5:7: error: array type 'int[6]' is not assignable
    m = 'UJJAIN'; // incorrect
    ~ ^
eg120.c:6:7: error: array type 'int[6]' is not assignable
    m = "UJJAIN"; // incorrect
    ~ ^
2 warnings and 2 errors generated.
*/