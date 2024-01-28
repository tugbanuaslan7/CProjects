#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//Klavyeden girilen sayý 5'e ve 3'e tam bölünüyor mu
	
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	if(sayi%3==0 && sayi%5==0) //þartlarýn hepsini saðlamas gerekir
	{
		printf("sayi 3 ve 5'e tam bolunur");
	}
	
	else //þartlarýn birini bile saðlamýyorsa bunu yazdýrýr
	{
		printf("sayi 3 ve 5'e tam bolunmez");
	}
	
		
	return 0;
}





