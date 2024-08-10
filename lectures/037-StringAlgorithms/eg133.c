#include<stdio.h>
void toUpperCase(char *p){
    while(*p != '\0'){
        //if(*p >= 90 && *p <= 122){ // correct
        //if(*p >= 'a' && *p <= 'z'){ // correct // ultimately ascii value will be placed
        if(*p >= 90 && *p <= 'z'){ // this is also correct
            *p = *p-32;
        }
        p++;
    }
}
int main(){
    char a[51];
    printf("Enter a string to convert into upper case: ");
    scanf ("%s", a);
    printf("Input before conversion: %s\n",a);
    toUpperCase(a);
    printf("After conversion string is : (%s)\n",a);
    return 0;
}

/*
Enter a string to convert into upper case: Ujjain
Input before conversion: Ujjain
After conversion string is : (UJJAIN)
*/