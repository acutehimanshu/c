#include<stdio.h>
int main(){
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	if(x > 50 ){
		printf("%d is grater than 50", x);
	}
	else
	{
		if(x < 50 ){
			printf("%d is Less than 50", x);
		}else{
			printf("%d is equal to 50", x);
		}
	}
	return 0;
}