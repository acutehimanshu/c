#include<stdio.h>
int main(){
int x, y, z;
printf("Enter a number: ");
scanf("%d", &x);
if(x>1){
z = 0;
y =2;
while(y<x){
	printf("Dividing %d by %d\n", x, y);
if(x%y == 0){
	z = 1;
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

// output is correct still there is a logical issue in code
// x = 15; we have to check from 2 to 15 as per given code
// when when you device 15 by 3 and it will be divisble means its not prime number
// so once we we got reminer non zero, we should stop further calcualtion. 

// we will use Break Keyword to take control out of the loop block. 