#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	char kitapad[30], yazar[30], kitapyazar[60];
	
	printf("Kitap Adi ve Yazari Girin: ");
	scanf("%s %s", kitapad, yazar);
	
	// kiapyazar'a bir �ey atamad�m
	
 
    strcat(kitapyazar, kitapad); // kitapad'� al�r kitapyazar'a ekler ve birlikte yazd�r�r
    strcat(kitapyazar, " ");
	strcat(kitapyazar, "<--> ");
	strcat(kitapyazar, yazar);

	
	printf("\n\n");
	printf("%s", kitapyazar);
	
	
	
	// hayvanciftligi <--> georgeorwell
	
	
	return 0;
}
