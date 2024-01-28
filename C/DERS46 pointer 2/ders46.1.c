#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int sayi=20;
	int *s=&sayi;
	
	printf("Deger: %d\n", sayi);      // sayýyý ekrana yazdýrma
	
	printf("Adres: %x\n\n", s);             // adresi ekrana yazdýrma
	
	
	
	
	char harf='a';
	char *h=&harf;
	
	printf("Harf: %c\n", harf);         // harfi ekrana yazdýrma
	
	printf("Adres: %x", h);             // adresi ekrana yazdýrma
	
	
	
	
	
	return 0;
}
