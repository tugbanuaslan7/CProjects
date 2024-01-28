#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	printf("Ogrenci ortalama hesap bilgi sistemi\n\n");
	
	int sinav1, sinav2, ortalama;
	
	printf("Birinci sinav notunu giriniz: ");
	scanf("%d", &sinav1);
	
	printf("Ikinci sinav notunu giriniz: ");
	scanf("%d", &sinav2);
	
	ortalama=(sinav1+sinav2)/2;
	
	printf("Ortalama: %d\n\n", ortalama);
	
	if(ortalama>=50)
	{
		printf("Ogrenci dersten gecti");
	}
	
	else
	{
		printf("Ogrenci dersten kaldi");
	}
	
	
	
	return 0;
}
