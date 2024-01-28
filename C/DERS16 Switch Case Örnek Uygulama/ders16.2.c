#include <stdio.h>
#include <stdlib.h>


int main() 
{
	
	int sayi1, sayi2, secim, x;
	float pi;
	
	x=sayi1=12;
	sayi2=16;
	pi=3.14;
	
	printf("Matematik Menusu \n");
    printf("*****************\n\n");
 
    printf("1- Kare de alan ve cevre hesabi\n");
    printf("2- Girilen sayinin kupu\n");
    printf("3- Dairede alan ve cevre hesabi\n");
    printf("4- 5x2+7x-9 x e gore islemin sonucu\n");
    printf("5- Dikdortgenin alan ve cevre hesabi\n");
 
    printf("isleminizi seciniz: ");
    scanf("%d",&secim);
 
    switch(secim)
    {
     
	   case 1:
         printf("karenin alani: %d\n", sayi1*sayi1);
         printf("karenin cevresi: %d", sayi1*4);	
       break;	
	 
	   case 2:
	     printf("Sayinin kupu:%d", sayi1*sayi1*sayi1);
	   break;
	 
	   case 3:
	     printf("Dairenin alaný:%f\n", (sayi1*sayi1)*pi);
	     printf("Dairenin cevresi:%f", 2*sayi1*pi);
	   break;
      
	   case 4:
	     printf("islemin sonucu: %d", (5*x*x)+7*x-9);
	   break;
	 	 
	   case 5:
	     printf("Dikdortgenin alani:%d\n", sayi1*sayi2);
	     printf("Dikdortgenin cevresi:%d", (sayi1*sayi2)*2);
	   break;	
	
	   default:
		 printf("Girdiginiz rakam hatalidir");
		break;
	
	
	}
	
	
	return 0;
}
