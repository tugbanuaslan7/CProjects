#include <stdio.h>
#include <stdlib.h>

//girilen sayının faktöriyelini while ile bulan kod

int main() 
{
    int sayi, fact;
    
    fact=1;
    sayi=5;
    
    while(sayi>1)
    {
    	fact=fact*sayi;
    	sayi--;
	}
	
	printf("Sounc: %d", fact);
     
     
     
     
     
     
	return 0;
}
