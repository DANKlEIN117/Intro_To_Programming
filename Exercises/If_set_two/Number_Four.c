#include <stdio.h>
#include <stdlib.h>


int cube(int x);
int square(int x);

int main()
{
    int x;
    float y;

    printf("\nEnter the value of x: ");
    scanf("%d",&x);

    if (x > 5)
    {
        /* code */
        y = (4 * cube(x)) + (2 * x) -6;
        printf("\ny = %.2f\n\n", y);


    }else if (x < 5)
    {
        /* code */
        y = (float)(y = (3 * square(x)) - 4 * y + 12)/5;
        printf("\ny = %.2f\n\n",y);


    }else if (x == 5)
    {
        /* code */
        y = (6 * x) - 5;
        printf("\ny = %.2f\n\n",y);

    }
    
    
    
    return 0;
}int cube(int x){
    return x*x*x;
}int square(int x){
    return x*x;
}