#include<stdio.h>
int main(){
    char m;
    printf("Enter a character: ");
    scanf("%c", &m);
    switch (m)
    {
    case 'A':
    case 'a':
    case 'o':
    case 'O':
    case 'i':
    case 'I':
    case 'e':
    case 'E':
    case 'u':
    case 'U':
        printf("%c is Vowel\n", m);    
        break;
    default:
        printf("%c is not a vowel", m);
    }
    return 0;
}
