#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{ 
   // 3 basamakl� say�y� basamaklar�na ay�ran program� c dilinde kodlay�n
   
   int sayi;
   
   printf("3 basamakli bir sayi giriniz: ");
   scanf("%d", &sayi);
   
   int birler, onlar, yuzler;
   
   yuzler=sayi/100;
   printf("%d\n", yuzler); 
   
   onlar=sayi/10;
   onlar=onlar%10;
   printf("%d\n", onlar);
   
   birler=sayi%10;
   printf("%d", birler);
   
   
	return 0;
}
