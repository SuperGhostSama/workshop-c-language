#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d,h,min,resul;
    
    m=12 ; d=365 ; h=8760 ; min=525600 ;
    
    printf("Entrer l annee: ");
    scanf("%d",&y);
    printf("En mois c est : %d mois",y*m);
    printf("\nEn jours c est : %d jours",y*d);
    printf("\nEn heure c est : %d heures",y*h);
    printf("\nEn minute c est : %d minutes",y*min);
    return 0;
}
