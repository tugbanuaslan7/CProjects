#include <stdio.h>
#include <stdlib.h>

// 1 ile 20 aras�ndaki �ift say�lar� listeleyen c komutlar�n� yaz�n

int main() 
{
	
	int i;
	
	for(i=1; i<=20; i++)
	{
		while(i%2==0)
		{
			printf("%d\n", i);
			i++;
		}
	}
	
		
	
	
	
	return 0;
}
