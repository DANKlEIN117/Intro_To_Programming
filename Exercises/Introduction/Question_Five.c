#include<stdio.h>

void main()
{
    int measurement, meters;

    printf("Enter the measurement in cm: ");
    scanf("%d",&measurement);

    meters = (int)measurement/100;

    printf("%dcm = %dm\n", measurement,meters);
}
