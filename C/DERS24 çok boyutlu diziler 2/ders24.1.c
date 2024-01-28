#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	int matris[2][3]={10,20,30,40,50,60};
	
	// 10 20 30
    // 40 50 60 
	
	
	int i,j;
	
	for(i=0; i<2; i++) // 2 tane satýr var
	{
		for(j=0; j<3; j++) //3 tane sütun var
		{
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	
	
	
	
		
	
	return 0;
}
