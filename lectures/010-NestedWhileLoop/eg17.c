#include<stdio.h>
int main(){
int e,f;
e = 1;
while(e<=3){
f = 1;
while(f<=3){
printf("%d %d\n",e,f);
f++;
}
e++;
}
return 0;
}

/*

1 1
1 2
1 3
2 1
2 2
2 3
3 1
3 2
3 3


*/