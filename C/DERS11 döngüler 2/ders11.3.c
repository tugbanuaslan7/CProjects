#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	// klavyeden girilen sayýnýn faktöriyeli
	
	int i, sayi;
	int fact=1;
	
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	for(i=1; i<=sayi; i++)
	{
		fact=fact*i;
	}
	
	printf("Sonucunuz: %d", fact);
	
	
	
	return 0;
}
