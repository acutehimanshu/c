#include<stdio.h>
int main(){
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	if(x > 50 ){
		printf("%d is grater than 50", x);
	}else{
		printf("%d is less than 50", x);
	}
	return 0;
}