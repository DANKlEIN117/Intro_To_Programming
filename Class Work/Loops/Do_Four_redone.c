#include<stdio.h>
int main()
{
	float k;

	k = 600;

	do
	{
		printf("\nk = %.2f",k);
		k = k / 2;//updation
	}while(k >= 10); //Condition

	printf("\n\n");
	return 0;
}