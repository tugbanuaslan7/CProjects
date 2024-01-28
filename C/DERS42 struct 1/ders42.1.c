#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


    struct kitapbilgi
    {
    	char kitapad[30];
    	char yazar[30];
    	int fiyat;
    	float puan;
	};
	
    int main() 
	{
		
	    struct kitapbilgi kb = {"MatrinEden", "JackLondon", "27", 10.0};
	    
	    printf("Kitap Adi: %s\n", kb.kitapad);
	    printf("Yazar Adi: %s\n", kb.yazar);
	    printf("Fiyati: %s\n", kb.fiyat);
	    printf("Puani: %.1f", kb.puan);
	
	
	
	return 0;
}
