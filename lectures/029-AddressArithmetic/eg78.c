int main(){
    int *p; // p is capable of storing address of a block whose data type is int
    int x[5];
    p = &x[0]; // correct, p is of type int * and &x[0] is of type int *

    p = &x; // Incorrect, p is of type int * and &x is of type int (*)[5]
    return 0;
}

/*

warning: incompatible pointer types assigning to 'int *' from 'int (*)[5]' [-Wincompatible-pointer-types]
    p = &x; // Incorrect, p is of type int * and &x is of type int (*)[5]
      ^ ~~

*/