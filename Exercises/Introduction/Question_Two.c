#include<stdio.h>
#include<math.h>

void main()
{
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);

    area = 3.142 * radius * radius;
    circumference = 2 * 3.142 * radius;

    printf("\n The area of the circle is: %.2f\n", area);
     printf("\n The circumference of the circle is: %.2f\n\n", circumference);
}
