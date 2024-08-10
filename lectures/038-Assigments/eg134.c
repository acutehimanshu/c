#include<stdio.h>
void to_lower_case(char *);
int main(){
    char str[51];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("String in array (a) is: %s\n", str);
    to_lower_case(str);
    printf("After conversion to lower case. string in array (a) is %s\n", str);
    return 0;
}
void to_lower_case(char *p){
    while(*p != '\0'){
        if(*p >= 65 && *p <= 90 ){
            *p = *p+32;
        }
        p++;
    }
}