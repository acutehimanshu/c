#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    switch (x)
    {
    case 10:
        printf("Goods\n");        
        break;
    
    case 20:
        printf("Bads\n");        
        break;

    case 30:
        printf("Uglys\n");        
        break;
    
    default:
        printf("Invalid Inputs");
    }
    return 0;
}

/*
OUtput:

C:\025-switchCase>eg
Enter a number: 50
Invalid Inputs
C:\025-switchCase>eg
Enter a number: 30
Uglys
C:\025-switchCase>eg
Enter a number: 10
Goods
*/