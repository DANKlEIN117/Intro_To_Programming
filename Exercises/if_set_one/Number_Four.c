#include <stdio.h>

int main()
{
    int a;
    int b;
    float c;

    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);

    if (a > b)
    {
        /* code */
        c = a - b;
        printf("\nSubstracted: %.2f\n\n",c);
    }else if (b > a)
    {
        /* code */
        c = (float)a / b;
        printf("\nDivided: %.2f\n\n",c);
    }
    else
    {
        c = a + b;
        printf("\nAdded: %.2f\n\n",c);
    }
    
    
}