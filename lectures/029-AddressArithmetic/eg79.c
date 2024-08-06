#include<stdio.h>
int main(){
    int *p;
    printf("%lu\n", sizeof(*p)); // treat (sizeof(*p)) it as sizeof(int)
    return 0;
}
//4 // size of variable whose address p can store. in this case int. 