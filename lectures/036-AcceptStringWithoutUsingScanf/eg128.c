#include<stdio.h>
int main(){
    char city_name[31];
    printf("Enter name of city: ");
    scanf("%s", city_name); // it will be &city_name[0]   
    printf("Name of the city is :%s\n", city_name);
    return 0;
}