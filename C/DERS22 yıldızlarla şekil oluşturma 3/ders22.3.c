#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
		
	int i, j, boy;
	
	printf("Boy Degeri: ");
	scanf("%d", &boy);
	
	for(i=1; i<=boy; i++)
	{
		for(j=boy; j>=i; j--)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
