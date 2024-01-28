#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	int bagaj, el, sinir, odenecekTutar, kiloBasiUcret;
	
	kiloBasiUcret=5;
	sinir=23;
	bagaj=20;
	el=8;
	
	odenecekTutar=((bagaj+el)-sinir)*kiloBasiUcret;
	
	printf("Ödemeniz Gereken Tutar: %d", odenecekTutar);
	
	
	

	
	
	return 0;
}
