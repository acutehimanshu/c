#include<stdio.h>
void sam();
int x;
int main()
{
    x = 10;
    printf("%d\n",x);
    sam();
    printf("%d\n",x);
    return 0;
}
void sam()
{
    int x; // local x
    x = 203; // local x
    printf("%d\n",x); // local x

	{
	extern int x; // memory won't be allocated for x because of keyword extern
	printf("%d\n", x); // global x
	x=5050; // global x
	}
    printf("%d\n", x); // local x
}

/**
 * output
10
203
10
203
5050
 */
