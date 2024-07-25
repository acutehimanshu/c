#include<stdio.h>
int main()
{
	int x[10], largest, smallest, secondLastest, y;
	y = 0;
	while(y<=9){
		printf("Enter a number: ");
		scanf("%d", &x[y]);
		y++;
	}
	y = 0;
	largest = x[0];
	smallest = x[0];
	while(y<=9){
		if(x[y] > largest)
		{
			largest = x[y];
		}
		if(x[y] < smallest)
		{
			smallest = x[y];
		}
		y++;
	}
	if(largest == smallest)
	{
		printf("All values are same, hence we can not determine second Largest value\n");
	}
	else
	{
		secondLastest = smallest;
		y = 0;
		while(y<=9)
		{
			if(x[y]>secondLastest && x[y]!= largest)
			{
				secondLastest = x[y];
			}
			y++;
		}
		printf("Second Lastest is %d\n", secondLastest);
	}
	printf("Largest is %d\n", largest);
	printf("Smallest is %d\n", smallest);
	return 0;	
}