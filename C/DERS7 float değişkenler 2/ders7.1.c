#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
//maaþýna yüzde 12 zam yapýlan birinin yeni maaþýný hesaplama


    float maas, zamliMaas;
	
	printf("Maasinizi girn:");
	scanf("%f", &maas);
	
	zamliMaas=maas+maas*12/100;
	
	
	printf("Yeni maasiniz: %f TL", zamliMaas);
	
	

	
	
	return 0;
}
