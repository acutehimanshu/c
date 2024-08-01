#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x==10)
    {
        printf("Good");
    }else{
        if (x==20)
        {
            printf("bad");
        }else{
            if (x==30)
            {
                printf("Ugly");
            }else{
                printf("Invalid Input");
            }   
        }    
    }
    return 0;
}