#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int sayi=20;
	int *s=&sayi;
	
	printf("Deger: %d\n", sayi);      // say�y� ekrana yazd�rma
	
	printf("Adres: %x\n\n", s);             // adresi ekrana yazd�rma
	
	
	
	
	char harf='a';
	char *h=&harf;
	
	printf("Harf: %c\n", harf);         // harfi ekrana yazd�rma
	
	printf("Adres: %x", h);             // adresi ekrana yazd�rma
	
	
	
	
	
	return 0;
}
