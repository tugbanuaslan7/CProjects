
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, counter;
    
    sum=0;
    
    for(counter=1; counter<=41; counter+=4)
    {
    	sum=sum+counter;
    	printf("%d\n", sum);
	}
    printf("%d\n", sum);
    
    return 0;
}
