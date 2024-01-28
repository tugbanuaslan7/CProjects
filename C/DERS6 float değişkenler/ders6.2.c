#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	printf("ideal kilo hesaplama\n\n");
	
	//( boy - 100 + yaþ / 10 )*0.8 --> Kadýn  0.9 --> Erkek
	
	float boy, yas, ideal;
	
	boy=165;
	yas=20;
	
	ideal=( boy - 100 + yas / 10 ) * 0.8;
	
	printf("ideal kilonuz: %f", ideal);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
