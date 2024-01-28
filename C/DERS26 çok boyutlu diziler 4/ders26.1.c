#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	int m1[2][2]={10,12,15,18};
	int m2[2][2]={8,11,14,6};
	int toplam[2][2];
	int i, j, k, l;
	
	for(i=0; i<2; i++) // satýrlarý okutmak için
	{ 
		for(j=0; j<2; j++) // sütunlarý okutmak için
		{
			toplam[i][j]=m1[i][j]+m2[i][j];
		}
	}
	

	for(k=0; k<2; k++)
	{
		for(l=0; l<2; l++)
		{
			printf("%d ", toplam[k][l]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
}
