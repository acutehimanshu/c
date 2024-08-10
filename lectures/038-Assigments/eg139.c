// Case sensative comparision 
#include<stdio.h>
int compareStrings(char *p, char *q){
    while(*p != '\0' && *q != '\0' && *p == *q)
    {
        p++;
        q++;
    }
    return (*p) - (*q);
}
int main(){
    char a[51],b[51];
    int x;
    printf("Enter a string: ");
    scanf("%s", a);

    printf("Enter another string: ");
    scanf("%s", b);

    x = compareStrings(a,b);
    if(x == 0){
        printf("First string (%s) is same as second string (%s)\n",a,b);
    }else{
        if(x > 0){
            printf("First string (%s) is not same as  second string (%s)\n",a,b);
            printf("(%s) falls after (%s)\n",a,b);
        }else{
            printf("First string (%s) is not same as  second string (%s)\n",a,b);
            printf("(%s) falls before (%s)\n",a,b);
        }
    }
    return 0;
}