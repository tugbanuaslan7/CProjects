#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char kelime[100];
	
	printf("Kelimeyi Girrin: ");
    //	scanf("%s", &kelime);  // scanf bo�luktan sonras�n� okumuyor

	gets(kelime);
	
	printf("Katar Uzunlugu: %d", strlen(kelime));  // katardan kast�m�z dizinin i�indeki veri
	
	// strlen bo�ulu�u da karakterden sayiyor
	

	
	
	
	return 0;
}
