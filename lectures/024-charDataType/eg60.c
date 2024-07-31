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
        // m = m-32;
        m = m-' '; // when we place space it will be replace with 32 ascii
    }
    printf("You entered: %c\n", m);
    return 0;
 }