 #include <stdio.h>
 #include <conio.h>

int main()
{
    double salary;
    double tax;
    double net_salary;
    char gender;

    printf("\nEnter the salary: ");
    scanf("%lf",&salary);
    
    printf("\nEnter the gender (M for male and F for female): ");
    scanf(" %c",&gender);
 
    if (gender == 'F' && salary >= 0 && salary < 15000)
    {  
        tax = salary * (float)12/100;

    }else if (gender == 'F' && salary >= 15000)
    {
        
        tax = salary * (float)14/100;
        
    }else if (gender == 'M' && salary < 14000)
    {
        
        tax = salary * (float)13/100;
        
    }else if (gender == 'M' && salary >= 14000)
    {
      
        tax = salary * (float)15/100;
        
    }else
    {
        printf("\nError: Invalid salary amount or Gender!!\n\n");
    }

    net_salary = salary - tax;

    printf("\nNet salary is: %.2lf\n\n", net_salary);
    
    
    
    

}