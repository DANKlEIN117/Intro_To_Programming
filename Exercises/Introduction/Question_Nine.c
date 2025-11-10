#include<stdio.h>

void main()
{

    float weight, kilogram;
    int packages;

    printf("Enter the weight of the package in grams: ");
    scanf("%f",&weight);

    kilogram = weight/1000;
    packages = (int)1 / kilogram;

    printf("\n The weight of the package is %.1f kilograms\n", kilogram);
    printf("\n It takes %d such packages to form one kilogram.\n\n ",packages);
}
