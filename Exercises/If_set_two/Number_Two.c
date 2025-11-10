#include <stdio.h>

int main()
{
    double salary;
    double tax;
    double net_salary;

    printf("\nEnter the salary: ");
    scanf("%lf",&salary);

    if (salary < 10000)
    {
        /* code */
        tax = 0;
        net_salary = salary - tax;

        printf("\nTax = %.2lf\nNet salary = %.2lf\n\n",tax, net_salary);
    }else if (salary >= 10000 && salary < 20000)
    {
        /* code */
        tax = salary * (float)10/100;
        net_salary = salary - tax;

        printf("\nTax = %.2lf\nNet salary = %.2lf\n\n",tax, net_salary);
    }else if (salary >= 20000)
    {
        /* code */
        tax = salary * (float)15/100;
        net_salary = salary - tax;

        printf("\nTax = %.2lf\nNet salary = %.2lf\n\n",tax, net_salary);
    }
    
    
    
}