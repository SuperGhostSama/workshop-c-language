#include<stdio.h>
#include<stdlib.h>


int main()
{
	double C,F;
	
	printf("Entrer la temperature en degre Celsius : ");
	scanf("%lf", &C);
	F = (C*1.8)+32;
	printf("La temperature Fareinheight : %lf", F);
	
return(0);
}
