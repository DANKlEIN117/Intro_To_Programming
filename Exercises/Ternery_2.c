#include <stdio.h>

int main()
{
    int age , vote;

    printf("\nEnter your Age: ");
    scanf("%d",&age);

    vote = (age>=18) ? printf("You can Vote") : printf("You cannot Vote");
    return 0; 
}