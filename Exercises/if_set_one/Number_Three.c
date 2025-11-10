#include <stdio.h>

int main()
{
    double gross_pay;
    double net_pay;
    double tax;

    printf("\nEnter the Gross Pay: ");
    scanf("%lf",&gross_pay);

    if (gross_pay < 10000)
    {
        /* code */
        tax = gross_pay * (0/100);
        net_pay = gross_pay - tax;

        printf("\nThe Net pay is: %.2lf\n\n",net_pay);


    }else if (gross_pay >= 10000 && gross_pay < 20000)
    {
        /* code */
        tax = gross_pay * (float)10/100;
        net_pay = gross_pay - tax;

        printf("\nThe Net pay is: %.2lf\n\n",net_pay);


    }else if (gross_pay >= 20000 && gross_pay < 30000)
    {
        /* code */
        tax = gross_pay * (float)15/100;
        net_pay = gross_pay - tax;

        printf("\nThe Net pay is: %.2lf\n\n",net_pay);
    }else if (gross_pay >= 30000 && gross_pay < 40000)
    {
        /* code */
        tax = gross_pay * (float)25/100;
        net_pay = gross_pay - tax;

        printf("\nThe Net pay is: %.2lf\n\n",net_pay);
    }else if (gross_pay >= 40000)
    {
        /* code */
        tax = gross_pay * (float)30/100;
        net_pay = gross_pay - tax;

        printf("\nThe Net pay is: %.2lf\n\n",net_pay);
    }else
    {
        printf("\nError: Enter a valid gross pay to calculate the net pay!!");
    }
      
    return 0;
}