#include <stdio.h>
#include <stdlib.h>

int main()
{
    double F , C;
    
    printf("Entrer la temperature en Fareinheit :");
    scanf("%lf" , &F);
    C = (F-32)/1.8 ;
    printf("Temperature en Celcius = %lf C", C );

}
