#include<stdio.h>
int main()
{
	int choice;
	int x[3][3], y[3][3];
	int rowIndex, columnIndex, columnTotal, rowTotal, grandTotal;
	do{
		printf("1. Accept Data\n");
		printf("2. Print Matrix\n");
		printf("3. Transepose Matrix\n");
		printf("4. Exit\n");
		printf("Select an option(1-4) :");
		scanf("%d", &choice);
		if(choice > 4 || choice < 1){
			printf("Invalid Choice\n");
			continue;
		}
		if(choice == 1)
		{
			for (rowIndex = 0; rowIndex < 3; rowIndex++)
			{
				for (columnIndex = 0; columnIndex < 3; columnIndex++)
				{
					printf("Enter a number for (%d, %d) cell: ", rowIndex, columnIndex);
					scanf("%d", &x[rowIndex][columnIndex]);
				}
			}
			continue;
		}
		grandTotal = 0;
		if(choice == 2)
		{
			for (rowIndex = 0; rowIndex < 3; rowIndex++)
			{ 
				rowTotal = 0;
				for (columnIndex = 0; columnIndex < 3; columnIndex++)
				{
					
					// printf("%d\t", x[rowIndex][columnIndex]);
					printf("%12d\t", x[rowIndex][columnIndex]);
					grandTotal = grandTotal+x[rowIndex][columnIndex];
					rowTotal = rowTotal+x[rowIndex][columnIndex];
				}
				printf("%13d\t", rowTotal);
				printf("\n");
			}
			for (columnIndex = 0; columnIndex < 3; columnIndex++){
				columnTotal = 0;
				for (rowIndex = 0; rowIndex < 3; rowIndex++){
					columnTotal = columnTotal + x[rowIndex][columnIndex];
				}
				printf("%12d\t", columnTotal);
			}
			printf("%13d\n", grandTotal );
			continue;
		}
		if(choice == 3)
		{
			for (rowIndex = 0; rowIndex < 3; rowIndex++)
			{ 
				for (columnIndex = 0; columnIndex < 3; columnIndex++)
				{
					y[columnIndex][rowIndex] = x[rowIndex][columnIndex];
				}
			}
			for (rowIndex = 0; rowIndex < 3; rowIndex++)
			{ 
				for (columnIndex = 0; columnIndex < 3; columnIndex++)
				{
					// printf("%12d\t", y[rowIndex][columnIndex]);
					x[rowIndex][columnIndex] = y[rowIndex][columnIndex];
				}
			}
			printf("Matrix data Transeposed\n");
			continue;
		}
	}while(choice != 4);
	return 0;
}