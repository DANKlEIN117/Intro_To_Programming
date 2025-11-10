#include<stdio.h>
#include<math.h>

int main()
{
    float number, square, cube, square_root, cube_root;

    printf("Enter a number: ");
    scanf("%f",&number);

    square = number * number;
    cube = number * number * number;
    square_root = sqrt(number);
    cube_root = cbrt(number);

    printf("\n Square = %.2f\n", square);
    printf("\n Cube = %.2f\n", cube);
    printf("\n Square root = %.2f\n", square_root);
    printf("\n Cube root = %.2f\n\n", cube_root);

    return 0;

}
