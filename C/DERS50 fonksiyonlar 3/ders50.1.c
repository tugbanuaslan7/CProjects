#include <stdio.h>
#include <stdlib.h>

//klavyeden girilen sayinin kübünü bulan fonksiyon

int kupbul(int sayi)
{
	int sonuc=sayi*sayi*sayi;
	return sonuc;
}


int main() 
{
	int s;
	printf("Sayiyi girin: ");
	scanf("%d", &s);
	
	kupbul(s);
	
	printf("\n\n Sonuc: %d", kupbul(s));
	
	
	return 0;
}
