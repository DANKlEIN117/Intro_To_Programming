#include <stdio.h>

int main()
{
    float area;
    float perimeter;
    int figure;
    const float PI = 3.14159;

    printf("\nFigures Supported In This Program\n\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Right-Angled Triangle\n\n");

    printf("\nEnter the type of figure to calculate the area and perimeter: ");
    scanf("%d",&figure);

    if (figure==1)
    {
        /* code */
        float width;
        float length;

        printf("\nRectangle\n");

        printf("\nEnter the width and the length separated by a space: ");
        scanf("%f %f",&width,&length);

        area = width * length;
        perimeter = 2*(width+length);

        printf("\nRectangle: width: %.2f, length: %.2f, Area: %.2f, Perimeter: %.2f\n\n", width, length, area, perimeter);

    }else if (figure==2)
    {
        /* code */
        float radius;

        printf("\nCircle\n");

        printf("\nEnter the radius of the circle: ");
        scanf("%f",&radius);

        area = 2 * PI * radius * radius;
        perimeter = 2 * PI * radius;

        printf("\nCircle: radius: %.1f, Area: %.1f, Perimeter: %.1f\n\n", radius, area, perimeter);

    }else if (figure==3)
    {
        /* code */
        float base;
        float height;
        float hypotenuse;

        printf("\nRight-Angled Triangle\n");

        printf("\nEnter the base, height and hypotenuse separated by a space: ");
        scanf("%f %f %f",&base,&height,&hypotenuse);

        area = 0.5 * base * height;
        perimeter = base + height + hypotenuse;

        printf("\nRight Triangle: Base: %.1f, Height: %.1f, Hypotenuse: %.1f, Area: %.2f, Perimeter: %.1f\n\n",base , height, hypotenuse, area, perimeter);
    }else
    {
        /* code */
        printf("\nError: Invalid Figure Number or Figure Unsupported\n\n");
    }
    
    
    return 0;
}