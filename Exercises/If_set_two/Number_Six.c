#include <stdio.h>


int main()
{
    int number;

    printf("\nEnter a Number: ");
    scanf("%d",&number);

    if (number%9 == 0 && number%2==0)
    {
        /* code */
        printf("\n%d is evenly divisible by 9\n\n", number);
    }else
    {
        printf("\n%d is not evenly divisible by 9\n\n", number);
    }
    
    return 0;
}