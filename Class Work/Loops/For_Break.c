#include<stdio.h>

int main()
{
	int i;

	for(i = 1;i <= 10;i++)
	{
		if(i == 6)
		{
			printf("\n\nThis is my favourite number: %d\n", i);
			break;
		}
		printf("\ni = %d",i);
	}

	printf("\n\n");
	return 0;
}