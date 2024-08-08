#include<stdio.h>
int calculate_sum(int *j, int rows, int columns){
    int total,y;
    int total_elements = rows*columns;
    for ( total = 0, y = 0; y<total_elements; y++)
        total = total + *(j+y);
    return total;
}
int main(){
    int x[5][3], total;
    x[0][0]=1;
    x[0][1]=2;
    x[0][2]=3;
    x[1][0]=10;
    x[1][1]=20;
    x[1][2]=30;
    x[2][0]=100;
    x[2][1]=200;
    x[2][2]=300;
    x[3][0]=1000;
    x[3][1]=2000;
    x[3][2]=3000;
    x[4][0]=10000;
    x[4][1]=20000;
    x[4][2]=30000;
    total = calculate_sum((int *)x, 5,3);
    printf("Total is %d\n", total);
    return 0;    
}

/*

added 1
added 2
added 3
added 10
added 20
added 30
added 100
added 200
added 300
added 1000
added 2000
added 3000
added 10000
added 20000
added 30000
Total is 66666

*/