#include<stdio.h>
int calculate_sum(int *j, int rows, int columns){
    int total,y;
    int total_elements = rows*columns;
    for ( total = 0, y = 0; y<total_elements; y++)
        total = total + *(j+y);
    return total;
}
int main(){
    int x[5], total,y;
    for(y=0; y<5; y++){
        printf("Enter a number: ");
        scanf("%d", &x[y]);
    }
    total = calculate_sum((int *)x, 1,5);
    printf("Total is %d\n", total);
    return 0;    
}

