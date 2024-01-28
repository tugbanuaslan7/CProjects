#include <stdio.h>
#include <stdlib.h>

// içi boþ dörtgen çizdien fonksiyon


void dortgen(int kisa, int uzun)
{
	int i,j;
	
	for(i=1; i<=kisa; i++)
	{
		for(j=1; j<=uzun; j++)
		{
			if(i==1 || i==kisa || j==1 || j==uzun)
			{
				printf("*");
			}
			
			else
			{
				printf(" ");
			}
		}
		
		printf("\n");
	}
	
}




int main() 
{
	int kisa, uzun;
	
	printf("Kisa kenari giriniz: ");
	scanf("%d", &kisa);
	
	printf("Uzun kenari giriniz: ");
	scanf("%d", &uzun);
	
	dortgen(uzun, kisa);
	
	
	return 0;
}
