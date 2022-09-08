#include <stdio.h>
#include <stdlib.h>

int main()
{
    double dist_km , dist_miles;
    
    printf("Entrer la distance en KM :");
    scanf("%lf" , &dist_km);
    dist_miles = dist_km * 0.621371 ;
    printf("mile = %lf miles", dist_miles );

}
