#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{
	int n, i;
	float toplam=0.0;
	float ortalama;
	
	printf("Kac sayinin artimetik ortalamasinin ogrenmek istiyorsunuz?\n");
	scanf("%d", &n);
	
	int sayilar[n]; 
	  
	for(i=0; i<n; i++)
	{
		printf("%d. sayi giriniz: ", i+1);
		scanf("%d", &sayilar[i]);
		
		toplam=toplam+sayilar[i];
	}
	
	printf("toplam: %f \n", toplam);
	printf("n: %d \n", n);
	
	ortalama=toplam/n;
	
	printf("girdiginiz sayilarin aritmetik ortalamasi %f dir.", ortalama);
	
	return 0;
}
