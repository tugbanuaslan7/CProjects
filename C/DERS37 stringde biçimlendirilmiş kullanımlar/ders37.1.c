#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	char kitap[40];
	
	printf("Mesaj: ");
	scanf("%s", kitap);
	
	printf("%s", kitap);
	
	printf("\n");
	
	printf("%16s", kitap); //girdiðimiz karakterleri de boþuktan sayiyor
	
	printf("\n");
	
	printf("%20.5s", kitap);
	
	printf("\n");
	
	printf("%-20s", kitap);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
