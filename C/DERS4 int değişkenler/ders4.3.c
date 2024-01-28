#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
//dikdörtgen alan ve çevresi

	int kisakenar, uzunkenar, alan, cevre;
	
	kisakenar=8;
	uzunkenar=12;
	
	alan=kisakenar*uzunkenar;
	cevre=2*(kisakenar+uzunkenar);
	
	printf("Alani: %d\n", alan);
	printf("Cevresi: %d", cevre);
	
	

	
	
	
	return 0;
}
