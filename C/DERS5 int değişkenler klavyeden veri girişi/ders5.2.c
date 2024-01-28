#include <stdio.h>
#include <stdlib.h>



int main() 
{

//Klavyeden 3 sýnav notu girilen öðrencinin ortalamasý


	int s1, s2, s3, ortalama;
	
	printf("Birinci sinav notunuzu giriniz: ");
	scanf("%d", &s1);
	
	printf("Ikinci sinav notunuzu giriniz: ");
	scanf("%d", &s2);
	
	printf("Ucuncu sinav notunuzu giriniz: ");
	scanf("%d", &s3);
	
	
	ortalama=(s1+s2+s3)/3;
	
	printf("Ortalamaniz: %d", ortalama); 
	
	
	

	
	
	
	
	return 0;
}
