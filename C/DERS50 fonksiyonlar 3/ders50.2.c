#include <stdio.h>
#include <stdlib.h>


void dortgen(int kisa, int uzun)
{
	int i, j;
	
	for(i=0; i<kisa; i++)
	{
		for(j=0; j<uzun; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
}

int main() 
{
	int kisa, uzun;
	
	printf("Kisa kenari girin: ");
	scanf("%d", &kisa);
	
	printf("Uzun kenari girin: ");
	scanf("%d", &uzun);
	
	dortgen(kisa, uzun);
	
	
	
	return 0;
}
