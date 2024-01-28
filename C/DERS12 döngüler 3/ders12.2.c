#include <stdio.h>
#include <stdlib.h>
 
 //tribonacci

int main() 
{
	int a, b, c, sum, i;
	
	a=1;
	b=1;
	c=1;
	
	
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	
	for(i=1; i<=7; i++)
	{
		sum=a+b+c;
		a=b;
		b=c;
		c=sum;
		
		printf("%d\n", sum);
	}
	
	
	
	
	
	return 0;
}
