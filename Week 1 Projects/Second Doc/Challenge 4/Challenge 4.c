#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float x,d,x1,x2;
	
	
	printf("Entrer a : ");
	scanf("%d",&a);
	printf("Entrer b : ");
	scanf("%d",&b);
	printf("Entrer c : ");
	scanf("%d",&c);
	
 
	if(a==0)
	{
		
		if(b==0)
		{ 
		 	if(c==0)
			{
		   		printf("La solution est l'ensemble IR\n");
			}
			else{
		        printf("Aucune solution dans IR (Ensemble vide)\n" );
		    }
	    }
		else
		{
			x = -c/b;
			printf("La solution est x = %.2f\n",x);
	    }
	}
	else{
		
	    d = (b*b) - (4*a*c);
		printf("La valeur du Delta est %.2f\n",d);
		if(d==0)
		{
			x = (float)-b / (2*a);
			printf("La solution est x = %.2f\n",x);
		}
		else if(d > 0)
		{
			x1 = (-b-sqrt(d)) / (2*a);
			x2 = (-b+sqrt(d)) / (2*a);
			printf("Les solutions sont x1 = %.2f et x2 = %.2f\n",x1,x2);
		}
		else
		{
			
			printf("Aucune solution dans IR (Ensemble vide)\n" );
		}
	}
}
