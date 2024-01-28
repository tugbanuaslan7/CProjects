#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
 char kitapadi[30];
 char yazar[20];
 char sayfasayisi[4];
 char basimtarihi[4];
 char basimevi[20];
 char turu[10];
 
 printf("Name of Book: ");
 scanf("%s", kitapadi);
 
 printf("Author: ");
 scanf("%s", yazar);
 
 printf("Number of Page: ");
 scanf("%s", sayfasayisi);
 
 printf("Publication Year: ");
 scanf("%s", basimtarihi);
 
 printf("Printing House: ");
 scanf("%s", basimevi);
 
 printf("Type of Book: ");
 scanf("%s\n", turu);	
	
	
	printf("        KITAP TANITIMI         \n\n");
	printf("Name of Book: %s\n", kitapadi);
	printf("Author: %s\n", yazar);
	printf("Number of Page: %s\n", sayfasayisi);
	printf("Publication Year: %s\n", basimtarihi);
	printf("Printing House: %s\n", basimevi);
	printf("Type of Book: %s\n", turu);
	
	
	
	
	
	return 0;
}
