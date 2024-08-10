// Case sensative comparision 
#include<stdio.h>
int compareStrings(char *p, char *q){
    int flag = 1;
    while(*p != 0){
        printf("(%c) (%c)", *p, *q);
        if(*p == *q){
            flag = 0;
        }else{
            flag = 1;
        }
        if(*q == '\0' || flag == 1) break;
        p++;
        q++;
    }
    return flag;
}
int main(){
    char a[51],b[51];
    printf("Enter a string: ");
    scanf("%s", a);

    printf("Enter another string: ");
    scanf("%s", b);
    if(compareStrings(a,b) == 1){
        printf("(%s) and (%s) are not same\n",a,b);
    }else{
        printf("(%s) and (%s) are same\n",a,b);
    }
    return 0;
}