#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
int bagaj, el, odenecekUcret, sinirKilo=23, kiloBasiUcret=5, toplam;
	
	printf("Bagaj agirligini giriniz: ");
	scanf("%d", &bagaj);
	
	printf("El agirligini giriniz: ");
	scanf("%d", &el);
	
	toplam=bagaj+el;
	odenecekUcret=(toplam-sinirKilo)*kiloBasiUcret;
	
	printf("Odenmesi gereken ucret: %d TL", odenecekUcret);

	
	
	
	
	
	
	
	
	return 0;
}
