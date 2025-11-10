#include<stdio.h>

void main()
{

    float kilometers, meters;

    printf("Enter the distance in kilometers: ");
    scanf("%f",&kilometers);

    meters = (float)kilometers * 1000;

    printf("%.2f kilometers = %.2f meters",kilometers,meters);
}
