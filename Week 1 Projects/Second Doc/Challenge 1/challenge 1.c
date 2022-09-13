#include <stdio.h>

int main() {
	int num,Resultat;
	
	

    printf("saisir un nombre : ");
    scanf("%d",&num);
    
    Resultat=num%2;
    
    if(Resultat==0)
	{
        printf("le nombre est pair");
    }else{
        printf("le nombre est impair");
    }


return 0;
}
