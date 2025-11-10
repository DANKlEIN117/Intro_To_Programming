#include <stdio.h>

int main()
{
    int number;

    printf("\nEnter an Integer: ");
    scanf("%d",&number);

    if (number > 0)
    {
        /* code */
        printf("\n%d is a positive Integer\n\n", number);

    }else if (number < 0)
    {
        /* code */
        printf("\n%d is a negative Integer\n\n", number);
    }else
    {
        printf("\nZero\n\n");
    }
    
    return 0;
}