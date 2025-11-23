#include<stdio.h>
int main()
{
	int k;

	k = 1;//Initialization

	do
	{
		printf("\nk = %d",k);
		k = k + 1;//updation
	}while(k <= 20); //Condition

	printf("\n\n");
	return 0;
}