#include <stdio.h>

int main () {
	double num;
	
	printf("Entrer votre numero :");
	scanf("%lf", &num);
	
	if(num>0)
	{
		printf("Votre numero est positif.");
	}
	else if(num<0)
	{
		printf("Votre numero est negatif.");
	}
	else
	{ 
	printf("Votre numero est neutre.");
	}

	return 0;
}
