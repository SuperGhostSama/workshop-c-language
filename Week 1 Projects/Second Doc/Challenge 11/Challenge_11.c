#include<stdio.h>
#include<time.h>

int main () 
{
   srand(time(NULL)); 
   int r = rand() % 6; 
   
   switch(r) {
   	    case 0 :
		{
   	 	printf("Lundi ",r);
	    break;
		}
	    case 1 :
		{
   	 	printf("Mardi ",r);
	    break;
		}	
		 case 2 :
		{
   	 	printf("Mercredi ",r);
	    break;
		}
		 case 3 :
		{
   	 	printf("Jeudi ",r);
	    break;
		}
		 case 4 :
		{
   	 	printf("Vendredi ",r);
	    break;
		}
		 case 5 :
		{
   	 	printf("Samedi ",r);
	    break;
		}
		 case 6 :
		{
   	 	printf("Dimanche ",r);
	    break;
		}
 	 	
   }
return 0;	
}
