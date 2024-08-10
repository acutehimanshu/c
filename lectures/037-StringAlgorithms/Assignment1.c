#include<stdio.h>
void toLowerCase(char *p){
    while(*p != '\0'){
        if(*p >= 65 && *p <= 90 ){
            *p = *p+32;
        }
        p++;
    }
}
int main(){
    char str[51];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("String Before conversion: %s\n", str);
    toLowerCase(str);
    printf("String After conversion: %s\n", str);
    return 0;
}