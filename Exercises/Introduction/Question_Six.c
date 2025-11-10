#include<stdio.h>

void main()
{
    float temperature, fahrenheit;

    printf("Enter the temperature in degree Celsius: ");
    scanf("%f",&temperature);

    fahrenheit = (float)(temperature * 1.8) + 32;

    printf("\n%.1f Degree Celsius = %.2f Degree Fahrenheit\n\n", temperature,fahrenheit);
}
