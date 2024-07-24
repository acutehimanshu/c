#include<stdio.h>
int main(){
int x, y, z;
printf("Enter a number: ");
scanf("%d", &x);
if(x>1){
z = 0;
y =2;
// while(y<x){
while(y<=x/2){ // no possibility of division after x/2
	printf("Dividing %d by %d\n", x, y);
if(x%y == 0){
	z = 1;
	break;
}
y++;
}
}else{
	z=1;
	
}
if(z == 0){
printf("Number is prime");
}else{
printf("Number is not prime");

}
return 0;
}
