#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    switch (x)
    {
    case 10:
    case 20:
        printf("Goods\n");        
        break;
    
    case 30:
    case 40:
        printf("Bads\n");        
        break;

    case 50:
    case 60:
        printf("Uglys\n");        
        break;
    
    default:
        printf("Invalid Inputs");
    }
    return 0;
}
