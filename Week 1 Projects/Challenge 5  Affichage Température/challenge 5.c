#include <stdio.h>

int main()
{
    double Celsius,Fahrenheit;

    printf("Entrer temperature en Fareinheit: ");

    scanf("%lf",&Fahrenheit);

    Celsius = (Fahrenheit-32)/1.8;

    printf("votre temperature en Celsius : %lf",Celsius);

    if(20<=Celsius && Celsius<30)
    {
        printf("\n il fait chaud ");
    }

    else if(30<=Celsius)
    {
        printf("\n il fait tres chaud");
    }

    else if(0<=Celsius && Celsius<20)
    {
        printf("\n il fait froid");
    }

    else 
    {
        printf("\n il fait tres froid");
    }

}
