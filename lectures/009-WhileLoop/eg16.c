#include<stdio.h>
int main(){
	int e,f,g;
	e = 0;
	f = 1;
	while(e<=34){
		printf("%d\n", e);
		g = e+f;
		e = f;
		f = g;
	}
	return 0;
}

/*
0
1
1
2
3
5
8
13
21
34
// its Fibonnaci series. (next value will be sum of last 2 values)
*/