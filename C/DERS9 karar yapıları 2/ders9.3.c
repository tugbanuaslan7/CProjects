#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int main() 
{
	//Klavyeden girilen sayý 5'e veya 3'e tam bölünüyor mu
	
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	if(sayi%3==0 || sayi%5==0) //þartlarýn birini saðlamsý yeterli
	{
		printf("sayi 3 veya 5'e tam bolunur");
	}
	
	else //þartlarýn hiçbirini saðlamýyorsa burayý yazdýrýr
	{
		printf("sayi 3 veya 5'e tam bolunmez");
	}
	
		
	return 0;
}
	
	
