#include <stdio.h>
#include <stdlib.h>



int main() 
{
	
	int dizi[100];
	int i, sayi, toplam=0, ortalama;
	
	printf("eleman sayisi: ");
	scanf("%d", &sayi);
	
	for(i=0; i<sayi; i++)
	{
		printf("dizinin %d. degerini girin: ", i+1);
		scanf("%d", &dizi[i]);
		
		toplam=toplam+dizi[i];
		ortalama=toplam/sayi;
		
	}
	
	printf("\n\n");
	
	printf("toplam = %d\n", toplam);
	printf("ortalama = %d", ortalama);
	
	
	
	return 0;
}
