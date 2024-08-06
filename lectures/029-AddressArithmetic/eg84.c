#include<stdio.h>
int main(){
    int x[5]; // if someone give Dynamic value
    // find size of array
    int size;
    size = sizeof(x)/sizeof(int);
    printf("Size is %d\n", size);
    return 0;
}
