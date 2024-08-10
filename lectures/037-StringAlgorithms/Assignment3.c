#include<stdio.h>
int isPalindrop(char *p){
    int length = 0;
    int y, flag, center;
    char *q;
    q = p;
    while(*q != '\0'){
        q++;
        length++;
    }
    if(length %2 == 0){
       center = length/2; 
    }else{
        center = length/2+1; 
    }
    flag = 1;
    q--; // becase q is on \0 we have to compare 1 less than that.
    for( y = 0; y<center ; y++){
        if(*p == *q){
            flag = 0;
        }
        p++;
        q--;
    }
    return flag;
}
int main(){
    char str[51];
    printf("Enter a string: ");
    scanf("%s", str);
    if(isPalindrop(str) == 1){
        printf("String %s is not Palindrom\n", str);
    }else{
        printf("String %s is Palindrom\n", str);
    }
    
    return 0;
}