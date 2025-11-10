#include<stdio.h>

void main()
{
    float distance, time, speed;

    printf("Enter the distance covered in meters: ");
    scanf("%f",&distance);

    printf("Enter the time taken in minutes: ");
    scanf("%f",&time);

    speed = (distance/1000)/(time/60);

    printf("\n %.2f Km/hr", speed);
}
