//fibonacci sequence using do while loop
#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, n3, i, number;

    printf("Enter the number of terms: ");
    scanf("%d", &number);

    printf("\nFibonacci Series:\n");
    printf("%d\n%d\n", n1, n2); 

    i = 3; 
    do
    {
        n3 = n1 + n2;
        printf("%d\n", n3);
        n1 = n2;
        n2 = n3;
        i++;
    } while (i <= number);

    return 0;
}