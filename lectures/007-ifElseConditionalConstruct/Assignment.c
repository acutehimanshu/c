// accepr marks of 5 subject and print result
// if pass then go for percent and division 
// min 0, max 100 
// passing marks 33
// 1 subject suppmentry 
// 60 > 1st, upto 45 2nd, upto 33 4rd, supplimetry, or fail 

#include<stdio.h>
int main(){
	int english, hindi, maths, chemistry, physics, percent, failCounter;
	failCounter = 0;
	printf("Instruction: Marks should be between 0 to 100\n");
	printf("Enter marks for English: ");
	scanf("%d", &english);
	if(english > 100 || english <= 0){
		printf("Invalid Marks"); 
		return 0;
	}
	
	printf("Enter marks for Hindi: ");
	scanf("%d", &hindi);
	if(hindi > 100 || hindi <= 0){
		printf("Invalid Marks"); 
		return 0;
	}
	
	printf("Enter marks for Maths: ");
	scanf("%d", &maths);
	if(maths > 100 || maths <= 0){
		printf("Invalid Marks"); 
		return 0;
	}
	
	printf("Enter marks for Chemistry: ");
	scanf("%d", &chemistry);
	if(chemistry > 100 || chemistry <= 0){
		printf("Invalid Marks"); 
		return 0;
	}
	
	printf("Enter marks for Physics: ");
	scanf("%d", &physics);
	if(physics > 100 || physics <= 0){
		printf("Invalid Marks"); 
		return 0;
	}

	if(english >=33 && hindi >=33 && physics >= 33 && chemistry >= 33 && maths >=33){
		printf("\nCongratulations, You are passed\n");
		percent = (english+hindi+maths+physics+chemistry)/5;
		printf("You got %d percent marks\n", percent);
		if(percent >= 60){
			printf("You passed with First Division\n");
		}else{
			if(percent > 45){
				printf("You passed with Second Division\n");
			}else{
				printf("You Password with Third Division\n");	
			}	
		}
	}else{
		printf("You are failed");
	}
	

}