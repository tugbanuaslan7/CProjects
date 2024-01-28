#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//kalvyeden girilen net sayýsýna göre kaç puan aldýðýný hesaplama
	
	//Türkçe: 1.999
	//Matematik: 3.998
	//Sosyal Bilgiler: 1
	//Fen Bilgisi: 2.999
	//taban puaný: 100.160
	
	float turkce, matematik, sosyal, fen, taban, puan;
	
	taban=100.160;
	
	printf("Turkce netinizi giriniz: ");
	scanf("%f", &turkce);
	
	printf("Matematik netinizi giriniz: ");
	scanf("%f", &matematik);
	
    printf("Sosyal bilgiler netinizi giriniz: ");
	scanf("%f", &sosyal);
	
	printf("Fen bilgisi netinizi giriniz: ");
	scanf("%f", &fen);	
	
	puan=turkce*1.999+matematik*3.998+sosyal*1+fen*2.999+taban;
	
	printf("Puaniniz: %f", puan);
	
	

	return 0;
}
