#include <stdio.h>
#include <stdlib.h>

// 1 ile 20 aras�ndaki �ift say�lar� listeleyen ama 14 say�s�n� listelemeyen c komutu

int main() 
{
 
 int i=1;
 
 while(i<=20)
 { 
    if(i%2==0)
    {
         if(i==14)
        {
           i=i+2;
        }
   
        printf("%d\n",i);
  
    } 
 
      i++;
}


	return 0;
}
