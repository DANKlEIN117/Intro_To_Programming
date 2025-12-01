#include <stdio.h>

int main()
{
    int a , b, c, big;

    printf("\nEnter three numbers: ");
    scanf("%d %d %d",&a,&b, &c);

    big = (a > b) ? ((a > c) ? a : c):((b > c) ? b : c);

    printf("%d is the largest",big);
    return 0;
}