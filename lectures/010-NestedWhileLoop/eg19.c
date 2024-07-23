#include<stdio.h>
int main(){
int e,f,m;
m = 3;
while(m>=0){
e = 0;
f = 1;
while(e<=m){
printf("%d %d\n", e,f);
e++;
f++;
}
m--;
}
return 0;
}

/*

0 1
1 2
2 3
3 4
0 1
1 2
2 3
0 1
1 2
0 1

*/