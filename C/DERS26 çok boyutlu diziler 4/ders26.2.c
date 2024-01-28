#include <stdio.h>
#include <stdlib.h>

// adds two matrices of user-specified size and prints out the result

int main() 
{
	int row, column;
	
	printf("Enter the number of rows: ");
	scanf("%d", &row);
	
	printf("Enter the number of columns: ");
	scanf("%d", &column);
	
	int matris1[row][column];
	int i, j;
	
	for(i=0; i<row; i++) // get values for first matrix
	{
		for(j=0; j<column; j++)
		{
			printf("Value of first matrix at [%d][%d] ---> ", i+1, j+1);
			scanf("%d", &matris1[i][j]);
		}
	}
	
	printf("\n\nFirst Matrix: \n");  // print first matrix
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("%d ", matris1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	
	
	
	int matris2[row][column];
	
	for(i=0; i<row; i++) // get values for second matrix
	{
		for(j=0; j<column; j++)
		{
			printf("Value of second matrix at [%d][%d] ---> ", i+1, j+1);
			scanf("%d", &matris2[i][j]);
		}
	}	
	
		printf("\n\nSecond Matrix: \n"); // print second matrix
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("%d ", matris2[i][j]);
		}
		printf("\n");
	}
	
	
	
	printf("\nSum of the Matrices: \n");
	
	int sum[row][column]; //create new array to hold sum of matrices
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			sum[i][j] = matris1[i][j] + matris2[i][j];
		}
		printf("\n");
	}
	
	for(i=0; i<row; i++) // print sum arrays
	{
		for(j=0; j<column; j++)
		{
			printf("%d ", sum[i][j]);	
		}
		printf("\n");
    }
	
	

	return 0;
}

