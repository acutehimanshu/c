#include<stdio.h>
int sum(int (*p)[3], int rows){
    int columns = 3; // we know by value will be 3 by abolve line
    int total;
    int *j;
    int r,c;
    total = 0;
    for(r=0;r<rows;r++){
        j = (int *)p;
        for(c=0; c<columns; c++){
            total = total + *j;
            j++;
        }
        p++; // p++, p = p+1, hence p will be incremented by (sizeof(int[3])x1)
    }
    return total;
}
int main(){
    int x[4][3];
    int row, column;
    int total; 
    for(row = 0; row<=3; row++){
        for(column = 0; column <=2; column++){
            printf("Enter a number: ");
            scanf("%d", &x[row][column]);
        }
    }

    for(row = 0; row<=3; row++){
        for(column = 0; column <=2; column++){
            printf("%6d", x[row][column]);
        }
        printf("\n");
    }

    total = sum(x, 4);
    printf("Total is : %d\n", total);
}