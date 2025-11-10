#include<stdio.h>
void main()
{

    float height, base, area;

    printf("Enter the height of the triangle: ");
    scanf("%f",&height);

    printf("Enter the base of the triangle: ");
    scanf("%f",&base);

    area = 0.5 * base * height;     

    printf("\n The area is: %.2f\n\n", area);
}
