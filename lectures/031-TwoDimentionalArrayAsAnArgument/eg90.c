#include<stdio.h>
int main(){
    int x[4][3];
    int (*k)[3];
    int *j;
    int row, col;
    k = x; // will become k = &x[0], k points to x[0]
    j = (int *)k; // j points to x[0][0]
    printf("Address in k is %lu\n", k);
    printf("Address in j is %lu\n", j);
    *j = 10; // will be assigned to x[0][0]
    j++;
    *j=20; // will be assigned to x[0][2]
    j++;
    *j=30; // will be assigned to x[0][2]
    k++;
    // k points to block whose base address is &x[1], or we can say k points to x[1]
    // (k++) k = k+1, k will be incremented by (sizeof(int[3])*1)
    printf("Address in k after k++ is %lu\n", k);
    printf("Address in j is %lu\n", j);
    j = (int *)k; // j points to x[1]

    *j = 40; // will be assigned to x[1][0]
    j++;
    *j=60; // will be assigned to x[1][2]
    j++;
    *j=50; // will be assigned to x[1][2]
    k++; // k points to x[2]
    j = (int *)k; // j points to x[2][1]

    *j = 70; // will be assigned to x[2][0]
    j++;
    *j=80; // will be assigned to x[2][2]
    j++;
    *j=90; // will be assigned to x[3][2]
    k++; // k points to x[3]
    j = (int *)k; // j points to x[3][1]

    *j = 100; // will be assigned to x[3][0]
    j++;
    *j=110; // will be assigned to x[3][2]
    j++;
    *j=120; // will be assigned to x[3][2]

    for (row = 0; row<=3; row++){
        for (col = 0; col<=2; col++){
            printf("%5d", x[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

/*

Address in k is 6128169208
Address in j is 6128169208
Address in k after k++ is 6128169220
Address in j is 6128169216
   10   20   30
   40   60   50
   70   80   90
  100  110  120


*/