#include<stdio.h>
int getStringLength(char *p){
    int x;
    x=0;
    while(*p != '\0'){
        x++;
        p++;
    }
    return x;
}
int main(){
    char name[51];
    int l;
    printf("Enter a string: ");
    scanf("%s", name);
    l = getStringLength(name);
    printf("Length of (%s) is %d\n", name, l);
    return 0;
}