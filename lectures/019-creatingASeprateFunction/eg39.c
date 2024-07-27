#include<stdio.h>
void lmn(int, int); // LMN prototype declaration
int main(){
	int x,y;
	x = 10; y = 20;
	lmn(x,y); // lmn calling
	printf("Cool\n");printf("Cool\n");printf("Cool\n");
	x = 100; y = 200;
	lmn(x,y);
	printf("Cool\n");printf("Cool\n");printf("Cool\n");
	return 0;
}

void lmn(int x, int y) // lmn defination
{
	int z;
	z = x+y;
	printf("Total is %d\n", z);
}