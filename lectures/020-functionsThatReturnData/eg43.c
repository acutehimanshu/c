#include<stdio.h>
int lmn(int, int);
int main()
{
int x,y,z;
x = 10; y = 20;
z = lmn(x,y);
printf("Total is %d\n",z);
return 0;
}
int lmn (int x, int y)
{
return x+y;
}