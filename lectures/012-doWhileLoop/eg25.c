/* 
//my code
#include<stdio.h>
int main(){
int choice, x, y;
do{
printf("Enter a number: ");
scanf("%d", &x);
printf("Enter another number: ");
scanf("%d", &y);
printf("1. Add\n2. Substract\n3. Exit\n");
printf("Enter your Choice: ");
scanf("%d", &choice);
if(choice == 1){
printf("Sum is %d\n\n", x+y);
} else {
if(choice == 2){
printf("Subtract is %d\n\n", x-y);
}else{
printf("Invalid Choice\n");
}
}
}while(choice != 3);
printf("Program Ends.\n");
return 0;
}
// sir code
*/
#include<stdio.h>
int main(){
	int choice, x,y,z;
	do
	{
		printf("1. Add\n2. Subtract\n3. Exit\nEnter your choice: ");
		scanf("%d", &choice);
		if(choice == 1){
			printf("Enter a number: ");
			scanf("%d", &x);
			printf("Enter another number: ");
			scanf("%d", &y);
			z = x+y;
			printf("Result of %d + %d is %d \n", x,y,z);
		}
		if(choice == 2){
			printf("Enter a number: ");
			scanf("%d", &x);
			printf("Enter another number: ");
			scanf("%d", &y);
			z = x-y;
			printf("Result of %d - %d is %d \n\n", x,y,z);
		}
		if(choice < 1 || choice >3){
			printf("Invalid choice\n");
		}
	} while (choice != 3);
	return 0;
}