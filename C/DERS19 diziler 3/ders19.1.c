#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	char sehir[15];
	int i;
	
	for(i=0; i<3; i++)
	{
		printf("sehri girin: ");
		scanf("%s", sehir);
		printf("sehir: %s", sehir);
		printf("\n\n");
	}
	
	
	return 0;
}
