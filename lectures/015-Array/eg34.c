#include<stdio.h>
int main()
{
	int x[10], l, y;
	y = 0;
	while(y<=9){
		printf("Enter a number: ");
		scanf("%d", &x[y]);
		y++;
	}
	y = 0;
	l = x[0];
	while(y<=9){
		if(x[y] > l)
		{
			l = x[y];
		}
		y++;
	}
	printf("Largest is %d", l);
	return 0;	
}