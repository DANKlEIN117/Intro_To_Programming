#include <stdio.h>

int main()
{
    int age;
    

    printf("\nEnter your Age in years: ");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("You are ready to vote\n\n");
    }else if (age < 0)
    {
        printf("You were not born yet\n\n");

    }else if(age < 18)
    {
        printf("You must be 18 years to vote!!\n\n");
    }else
    {
        printf("Enter a valid age!!");
    }
    return 0;
    

}