/**
 Enter a number and if someone pring small then print capital
 * 
 */
 #include<stdio.h>
 int main(){
    char m;
    printf("Enter a character: ");
    scanf("%c", &m);
    if(m>=97 && m <=122){
        printf("You entered: %c\n", m-32);
    }else{
        printf("You entered: %c\n", m);
    }
    return 0;
 }