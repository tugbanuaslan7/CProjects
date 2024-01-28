#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int i;
	int fact=1;
	
	for(i=1; i<=5; i++)
	{
		fact=fact*i;
	}
	printf("5 sayisinin faktoriyel degeri: %d", fact);
	
	
	return 0;
}
