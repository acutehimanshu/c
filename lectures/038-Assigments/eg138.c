#include<stdio.h>
int isPalindrop(char *p){
    char *q;
    int z;
    if(*p == '\0'){
        return 1;
    }
    q= p;
    while(*q != '\0'){
        q++;
    }
    q--;
    z=1;
    while(p<q){
        if(*p != *q){
            z=1; 
            break;
        }
        q--;
        p++;
    }
    return z;
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