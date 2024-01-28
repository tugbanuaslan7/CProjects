#include <stdio.h>
#include <stdlib.h>

int toplam(int sayi1, int sayi2)
{
	int toplam;
	
	toplam=sayi1+sayi2;
	
	return toplam;
	
}

int main() 
{
	int sayi1, sayi2, sonuc;
	
	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	
	sonuc = toplam(sayi1, sayi2);
	
	printf("Girdiginiz sayilarin toplami: %d", sonuc);
	
	
	
	
	return 0;
}
