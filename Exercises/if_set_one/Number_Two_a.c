#include <stdio.h>

int main()
{
    
    int a;
    int b;
    char operator;
    float c;

    

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    fflush(stdin);
    printf("Enter an operator: ");
    scanf("%c",&operator);

    if (operator=='+')
    {
        /* code */
        c = a + b;
        printf("\n%d %c %d = %.2f\n\n",a,operator,b,c);


    }else if (operator=='-')
    {
        /* code */
        c = a - b;
        printf("\n%d %c %d = %.2f\n\n",a,operator,b,c);
    } else if (operator=='*')
    {
        /* code */
        c = a * b;
        printf("\n%d %c %d = %.2f\n\n",a,operator,b,c);
    }
    else if (operator=='/')
    {
        if (b != 0)
        {
            /* code */
            c = (float)a/b;
            printf("\n%d %c %d = %.2f\n\n",a,operator,b,c);
        }else
        {
            printf("\nError: Division by Zero!\n");
        }
        
    }else
    {
        printf("\nInvalid Operator!\n");
    }
    

    return 0;
    
    
}