#include<stdio.h>
int add(int, int);
int main()
{
int x,y;
x = 100; y = 20;
printf("Total is %d\n",add(x,y));
return 0;
}
int add (int x, int y)
{
return x+y;
}