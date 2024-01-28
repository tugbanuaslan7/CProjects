#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int i,j,k,l;
	printf("Enter the length of one edge of a triangle:");
	scanf("%d",&l);
    
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=i;j++)
		{
			for(k=l-i;k>=0 && j==1;k--)
			{
				printf(" ");
			}
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
