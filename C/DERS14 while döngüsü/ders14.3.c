#include <stdio.h>
#include <stdlib.h>

// 1 ile 20 arasýndaki çift sayýlarý listeleyen c komutlarýný yazýn

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
