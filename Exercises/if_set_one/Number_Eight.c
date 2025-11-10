#include <stdio.h>

int main()
{
    int Speed_Limit;
    int Vehicle_Speed;
    float Levy;
    int Excess_speed;

    printf("\nEnter the Vehicles Speed: ");
    scanf("%d",&Vehicle_Speed);

    printf("\nEnter the Speed Limit: ");
    scanf("%d",&Speed_Limit);

    if (Vehicle_Speed > Speed_Limit && (Vehicle_Speed - Speed_Limit) < 30)
    {
        /* code */
        Levy = 2500;
        Excess_speed = Vehicle_Speed - Speed_Limit;
        printf("\nVehicle speed: %dkph, speed limit: %dkph, excess speed: %dkph. The Levy is Kshs: %.2f\n\n",Vehicle_Speed, Speed_Limit,Excess_speed,Levy);
    }else
    {
        Levy = 4000;
        Excess_speed = Vehicle_Speed - Speed_Limit;
        printf("\nVehicle speed: %dkph, speed limit: %dkph, excess speed: %dkph. The Levy is Kshs: %.2f\n\n",Vehicle_Speed, Speed_Limit,Excess_speed,Levy);
    
    }
    
}