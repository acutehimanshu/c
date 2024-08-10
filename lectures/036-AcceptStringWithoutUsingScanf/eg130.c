#include<stdio.h>
int main(){
    char city_name[31];
    int i;
    printf("Enter a city name: ");
    scanf("%s", city_name);
    i = 0;
    while(city_name[i] != '\0') i++;
    printf("Length of %s is %d\n", city_name, i);
    return 0;
}