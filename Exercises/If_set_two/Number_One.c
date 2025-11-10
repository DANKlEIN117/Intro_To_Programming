#include<stdio.h>

int main()
{
    int number;

    printf("\nEnter a Number: ");
    scanf("%d",&number);

    if (number%2 == 0)
    {
        /* code */
        printf("\n%d is Even\n\n");
    }else if (number%2 != 0)
    {
        /* code */
        printf("\n%d is Odd\n\n");
    }
    
    return 0;
}