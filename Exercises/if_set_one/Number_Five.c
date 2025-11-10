#include <stdio.h>

int main()
{
    int keyboard_value;

    printf("Enter a number value from the keyboard to read: ");
    scanf("%d",&keyboard_value);

    if (keyboard_value < 0)
    {
        /* code */
        printf("\nNEGATIVE\n\n");

    }else if (keyboard_value > 0)
    {
        /* code */
        printf("\nPOSITIVE\n\n");

    }else
    {
        printf("\nZERO\n\n");
    }
    
    
}