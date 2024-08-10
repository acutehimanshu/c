#include<stdio.h>
void to_lower_case(char *p){
    while(*p != '\0'){
        if(*p >= 65 && *p <= 90 ){
            *p = *p+32;
        }
        p++;
    }
}
void to_proper_case(char *p){
    if(*p != '\0' && *p >= 97 && *p <= 122 ){
        *p = *p-32;
    } 
    p++;
    to_lower_case(p+1);
}
int main(){
    char str[51];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("String Before conversion: %s\n", str);
    to_proper_case(str);
    printf("String After conversion: %s\n", str);
    return 0;
}