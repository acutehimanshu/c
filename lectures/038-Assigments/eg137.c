#include<stdio.h>
int isPalindrop(char *p){
    char *q;
    if(*p == '\0'){
        return 1;
    }
    q= p;
    while(*q != '\0'){
        q++;
    }
    q--;
    while(p<q && *p == *q){
        q--;
        p++;
    }
    if(p<q)
        return 0;
    else
        return 1;
}
int main(){
    char str[51];
    printf("Enter a string: ");
    scanf("%s", str);
    if(isPalindrop(str) == 1){
        printf("String %s is Palindrom\n", str);
    }else{
        printf("String %s is not  Palindrom\n", str);
    }
    
    return 0;
}