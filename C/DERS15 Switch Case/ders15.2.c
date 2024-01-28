#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int i;

  printf ("enter a number from 1 to 7: ");
  scanf ("%d", &i);

  switch (i)
  {
 
    case 1:
      printf ("monday");
      break;
      
    case 2:
      printf ("tuesday");
      break;
      
    case 3:
      printf ("wednesday");
      break;
      
    case 4:
      printf ("thursday");
      break;
      
    case 5:
      printf ("friday");
      break;
      
    case 6:
      printf ("saturday");
      break;
      
    case 7:
      printf ("sunday");
      break;  
      
    default:
      printf ("the number that your entered is wrong");
}
	
	
	
	
return 0;
}
