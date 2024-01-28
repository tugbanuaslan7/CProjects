#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,b, sum, i;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &a);
	
	b=a;
	sum=a+b;
	
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", sum);
	
	for(i=a; i<=8; i++)
	{
		a=b;
		b=sum;
		sum=a+b;
		
		printf("%d\n", sum);
	}
	
	
	
	return 0;
}
