#include<stdio.h>
void main()
{
	float a, b, c, result;

	printf("Enter three numbers: ");
	scanf("%f %f %f",&a,&b,&c);

    if (c != 0)
    {
        result = (a * b)/c;
    }
    else
    {
        result = a + b;
    }
    
	// result = c != 0 ? (a * b)/ c : a + b;

	printf("\nThe answer is %.2f\n\n",result);
}