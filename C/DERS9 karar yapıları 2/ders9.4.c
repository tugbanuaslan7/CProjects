#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//klavyeden girilen dereceye göre suyun durumunu yazdýran programý kodlayýn
	
	int derece;
	
	printf("SUYUN DURUMU\n\n");
	
	printf("Suyun sicakligini giriniz: ");
	scanf("%d", &derece);
	
	if(derece<=0)
	{
		printf("su buz halinde");
	}
	
	if(derece>0 && derece<100)
	{
		printf("su sivi halinde");
	}
	
	if(derece>=100)
	{
		printf("su gaz halinde");
	}
	
	

	return 0;
}
