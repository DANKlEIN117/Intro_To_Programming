#include<stdio.h>
void main()
{

    float length, width, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);

    printf("Enter the width of the rectangle: ");
    scanf("%f",&width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("\n The area is: %.2f", area);
    printf("\n The perimeter is: %.2f", perimeter);

}
