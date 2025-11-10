#include <stdio.h>

int main()
{
    
    int a;
    int b;
    char operator;
    float c;

    

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("Enter an operator: ");
    scanf(" %c",&operator);

    switch (operator)
    {
    case '+':
        /* code */
        c = a + b;
        printf("\n%d %c %d = %.2f\n\n",a,operator,b,c);
        break;

    case '-':
        c = a - b;
        printf("\n%d %c %d = %.2f\n\n",a,operator,b,c);
        break;

    case '*':
        c = a * b;
        printf("\n%d %c %d = %.2f\n\n",a,operator,b,c);
        break;

    case '/':
        c = (float)a/b;
        printf("\n%d %c %d = %.2f\n\n",a,operator,b,c);
        break;
    
    default:
        printf("\nInvalid operator!");
        break;
    }
    
    
}