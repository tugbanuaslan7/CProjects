#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int sayi1, sayi2, toplam, fark, carpim;
	
	
	printf("birinci sayiyi giriniz:");
	scanf("%d", &sayi1);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%d", &sayi2);
	
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carpim=sayi1*sayi2;
	
	printf("iki sayinin toplami: %d\n", toplam);
	printf("iki sayinin farki: %d\n", fark);
    printf("iki sayinin carpimi: %d\n", carpim);  	
	
	

	
	return 0;
	}
