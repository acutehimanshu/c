// Case sensative comparision 
#include<stdio.h>
int i_compareStrings(char *p, char *q){
    char g,t;
    if(*p == '\0' && *q != '\0'){
        return (*p) - (*q);
    }
    if(*p != '\0' && *q == '\0'){
        return (*p) - (*q);
    }
    while(*p != '\0' && *q != '\0')
    {
        g=*p;
        t=*q;
        if(g>=97 && g<=122){
            g=g-32; // to upper case
        }
        if(t>=97 && t<=122){
            t=t-32; /// to upper case
        }
        if(g!=t){
            break;
        }
        p++;
        q++;
    }
    if(*p == '\0' && *q == '\0'){
        return 0;
    }else{
        if(*p == '\0' || *q == '\0'){
            return (*p) - (*q);
        }else{
            return g-t;
        }   
    }
}
int main(){
    char a[51],b[51];
    int x;
    printf("Enter a string: ");
    scanf("%s", a);

    printf("Enter another string: ");
    scanf("%s", b);

    x =i_compareStrings(a,b);
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