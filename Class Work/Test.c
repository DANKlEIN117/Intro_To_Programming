#include <stdio.h>


/*
int main()
{
    int number = 3;
    printf("\nNumber\tSquare\tCube\n");
    do{
        int square = number * number;
        int cube = number * number * number;

        printf("\n%d\t%d\t%d\n", number, square, cube);
        number++;

        

    }while (number < 10);
    
    
}

int main()
{
    printf("\nNumber\tSquare\tCube\n");
    for ( int number = 3; number < 10; number++)
    {
        int square = number * number;
        int cube = number * number * number;

        printf("\n%d\t%d\t%d\n", number, square, cube);
        
    }
    
}


#include <stdbool.h>
int main()
{
    int number;
    int sum = 0;
    bool isRunning = 0 ;
    
    printf("\nEnter integers : ");

    while (isRunning)
    {
        scanf("%d", &number);

        if (number == 0)
        {
            break;
        }

        sum += number;
        
    }
    printf("The sum is: %d\n", sum);
    return 0;


}


int main()
{
    int number = 0;
    int sum = 0;
    int square;

    while (number < 15)
    {
        square = number * number;
        sum += square;
        number++;
        

    };
    
    printf("\nThe sum of the squares is: %d", sum);
    
    
    return 0;
}


int main()
{
    
    int sum = 0;
    int square;

    for (int number = 0; number < 15; number++)
    {
        square = number * number;
        sum += square;
    }
    printf("The sum is: %d\n\n", sum);
    
}

*/
/*
int main()
{
    int number;
    double reciprocal;
    char option;

    while (1)
    {
        printf("\nEnter a number to find its reciprocal: ");
        scanf("%d",&number); 

        reciprocal = (double)1 / number;
        printf("The reciprocal of %d is %.10lf\n\n",number, reciprocal);
        
        printf("Press c to continue or x to exit: ");
        scanf(" %c", &option);

        if (option == 'c')
        {
            continue;

        }else if (option == 'x')
        {
            break;
        }
        
        
    }
    
    

    
    


}
*/
int main()
{
    
}