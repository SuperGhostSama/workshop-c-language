#include <stdio.h>
int main() {

    char nom [10], prenom[10], age[2], sex[5], numeroTel[10] ;
    
    // saisit des informations
    printf("Ajouter votre nom : ");
	scanf("%s", &nom );
    printf("Ajouter votre prenom : ");
    scanf("%s", &prenom);
    printf("Ajouter votre age : ");
    scanf("%s", &age);
    printf("Ajouter votre sex (Male Or Female) : ");
    scanf("%s", &sex);
    printf("Ajouter votre numeroTel : ");
    scanf("%s", &numeroTel);
    
    // affichage des informations
    printf("Challenge 1 : Affichage Informations \n");
    printf("Votre nom : %s \n" , nom );
    printf("Votre prenom : %s \n" , prenom );
    printf("Votre age : %s \n" , age);
    printf("Votre sex : %s \n" , sex );
    printf("Votre numeroTel : %s" , numeroTel );
    
    
return 0;

}
