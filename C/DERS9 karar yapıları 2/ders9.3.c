#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int main() 
{
	//Klavyeden girilen say� 5'e veya 3'e tam b�l�n�yor mu
	
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	if(sayi%3==0 || sayi%5==0) //�artlar�n birini sa�lams� yeterli
	{
		printf("sayi 3 veya 5'e tam bolunur");
	}
	
	else //�artlar�n hi�birini sa�lam�yorsa buray� yazd�r�r
	{
		printf("sayi 3 veya 5'e tam bolunmez");
	}
	
		
	return 0;
}
	
	
