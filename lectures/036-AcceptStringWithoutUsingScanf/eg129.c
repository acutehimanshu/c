#include<stdio.h>
int main(){
    char a[51];
    printf("Enter a string: ");
    scanf("%s", a); // it will be &city_name[0]   
    printf("Array a contains the follwoinf collection '%s' followed by string terminator\n", a);
    return 0;
}

/*


Enter a string: abcd efgh
Array a contains the follwoinf collection 'abcd' followed by string terminator

*/