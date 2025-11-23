#include<stdio.h>

void main()
{
    int age;

    printf("Enter your age in years: ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("\nYou can vote\n\n");
    }
    else
    {
        printf("\nYou are too young to vote\n\n");
    }

}
