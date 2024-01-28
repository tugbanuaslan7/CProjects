#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//uzun ve kýsa kenarý ondalýklý olarak giriln dikdörtgende alan ve çevre hesabý
	
	float uzunKenar, kisaKenar, cevre, alan;
	
	uzunKenar=14.5656;
	kisaKenar=5.8766;
	
	cevre=2*(kisaKenar+uzunKenar);
	alan=uzunKenar*kisaKenar;
	
	printf("Dikdortgenin cevresi: %f\n", cevre);
	printf("Dikdortgenin alani: %f", alan);
	
	
	
	
	
	
	return 0;
}
