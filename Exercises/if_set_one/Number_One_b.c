#include <stdio.h>

int main()
{
    int choice;
    int bottle;
    int cost;
    
    /* code */
    printf("\n\n**** Jamal and Daughters Pub ****\n");
    printf("\n\nBeer Brand Price\n");
    printf("1) Tusker 100/=\n");
    printf("2) Pilsner 120/=\n");
    printf("3) Smirnoff 140/=\n");
    printf("4) White Cap 90/=\n\n");

    printf("\nEnter your choice: ");
    scanf("%d",&choice);



    switch (choice)
    {
    case 1:
        /* code */
        printf("How many bottles of Tusker do you want? ");
        scanf("%d",&bottle);

        cost = bottle*100;
        printf("\n%d bottles of Tusker will cost you Kshs. %d\n\n", bottle, cost);
        break;
    case 2:
        printf("How many bottles of Pilsner do you want? ");
        scanf("%d",&bottle);

        cost = bottle*120;
        printf("\n%d bottles of Pilsner will cost you Kshs. %d\n\n", bottle, cost);
        break;
    case 3:
        printf("How many bottles of Smirnoff do you want? ");
        scanf("%d",&bottle);

        cost = bottle*140;
        printf("\n%d bottles of Smirnoff will cost you Kshs. %d\n\n", bottle, cost);

        break;

    case 4:
        printf("How many bottles of White Cap do you want? ");
        scanf("%d",&bottle);

        cost = bottle*90;
        printf("\n%d bottles of White Cap will cost you Kshs. %d\n\n", bottle, cost);

        break;

    default:
        printf("\nInvalid Choice choose between 1-4!!!! \n\n");
        break;
    }
    
    
}