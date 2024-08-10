#include<stdio.h>
void copyString(char *p, char *q){
    while(*q != '\0'){
        *p = *q;
        q++;
        p++;
    }
    *p = '\0';
}
int main(){
    char a[51], b[51];
    printf("Enter a string: ");
    scanf ("%s", a);
    copyString(b,a);
    printf("String in array (a) is (%s)\n",a);
    printf("String in array (b) is (%s)\n",b);
    return 0;
}

/*
String in array (a) is (great)
String in array (b) is (great)
*/