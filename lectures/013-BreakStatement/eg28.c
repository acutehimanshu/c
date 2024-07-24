#include<stdio.h>
int main()
{
	int x,y,z,ep,sp,j;
	printf("Enter starting points: ");	
	scanf("%d", &sp);
	printf("Enter ending points: ");	
	scanf("%d", &ep);
	j = sp;
	while(j<=ep){
		x = j;
		if(x>1){
			y = 2;
			z = 0;
			while(y<=x-1){
				if(x%y == 0){
					z = 1;
					break;
				}
				y++;
			}
			if(z == 0){
				printf("%d\n", x);
			}
		}
		j++;
	}
	return 0;
}