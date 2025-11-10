#include <stdio.h>

int main()
{
    int a;
    int b;
    float c;

    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);

    if (a > b)
    {
        /* code */
        if (b != 0)
        {
            /* code */
            c = (float)a/b;
            printf("\nResult: %.2f\n\n",c);

        }else
        {
            
            printf("\nError: Division By Zero Is Undefined!!\n\n");
        }
        
        
        

    }else if (b > a)
    {
        if (a != 0)
        {
            /* code */
            c = (float)b/a;
            printf("\nResult: %.2f\n\n",c);

        }else
        {
            printf("\nError: Division By Zero Is Undefined!!\n\n");
        }
        
    } 
    return 0;  
    
}