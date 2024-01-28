#include <stdio.h>
#include <stdlib.h>

/*
int main() 
{
	
	int sayilar[]={1,2,3,4,5};
	int i, fact=1;
	
	for(i=0; i<5; i++)
	{
		fact=fact*sayilar[i];
	}
	
	printf("5'in faktoriyeli: %d", fact);
	
	return 0;
} */



int main()
{

	int n, i;
	int fact[n];
	
	printf("Faktoriyelini ogrenmek istediginiz sayiyi giriniz: ");
	scanf("%d", &n);
	
	if(n<0)
	{
		printf("Negatif sayilarin faktoriyeli hesaplanamaz.\n");
	}
	
	for(i=1; i<=0; i++)
	{
		fact[n]=fact[i]*i;
	}
	
	printf("girdiginiz sayinin faktoriyeli: %d", fact[n]);
	
	
	return 0;
}




