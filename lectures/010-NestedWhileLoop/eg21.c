/*

    *
   ***
  *****
 *******
*********

*/
#include<stdio.h>
int main(){
	int lines,stars,x,y, space,z;
	lines = 5;
	stars = 1;
	space = 4;
	x=1;
	while(x<=lines){
		z = 1;
		while(z<=space){
			printf(" ");
			z++;
		}
		y = 1;
		while(y<=stars){
			printf("*");
			y++;
		}
		printf("\n");
		space--;
		stars = stars+2;
		x++;
	}
	return 0;
}