#include <stdio.h>
#include <stdlib.h>

int main()
{
    double dist_km , dist_miles;
    
    printf("Entrer la distance en Miles :");
    scanf("%lf" , &dist_miles);
    dist_km = dist_miles * 1.609344 ;
    printf("KM = %lf KM", dist_km );

}
