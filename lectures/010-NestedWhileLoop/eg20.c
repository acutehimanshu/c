/*

*
**
***
****
*****

*/
/* my code
#include<stdio.h>
int main(){
	int e, f;
	e = 1;
	while(e<=5){
		f = 1;
		while(e>=f){
			printf("*");
		f++;
		}
		printf("\n");
		e++;
	}
	return 0;
}

*/
#include<stdio.h>
int main(){
	int lines, stars,x,y;
	lines = 5;
	stars = 1;
	x=1;
	while(x<=lines){
		y = 1;
		while(y<=stars){
			printf("*");
			y++;
		}
		printf("\n");
		stars++;
		x++;
	}
	return 0;
}