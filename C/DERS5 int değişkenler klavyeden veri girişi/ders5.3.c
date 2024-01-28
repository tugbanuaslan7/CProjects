#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int su, kola, misir, bilet, toplam;
	
	printf("Alinan misir adeti:");
	scanf("%d", &misir);
	
	printf("Alinan kola adeti:");
	scanf("%d", &kola);
	
	printf("Alinan su adeti:");
	scanf("%d", &su);
	
	printf("Alinan bilet adeti:");
	scanf("%d", &bilet);
	
	toplam=misir*2+kola*2+su*1+bilet*8;
	
	printf("Toplam borcunuz: %d", toplam);
	
	
	
	return 0;
}
