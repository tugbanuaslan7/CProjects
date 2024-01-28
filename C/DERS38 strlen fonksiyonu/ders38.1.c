#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char kelime[100];
	
	printf("Kelimeyi Girrin: ");
    //	scanf("%s", &kelime);  // scanf boþluktan sonrasýný okumuyor

	gets(kelime);
	
	printf("Katar Uzunlugu: %d", strlen(kelime));  // katardan kastýmýz dizinin içindeki veri
	
	// strlen boþuluðu da karakterden sayiyor
	

	
	
	
	return 0;
}
