#include<stdio.h>

int main()
{
	int i;
	for(i = 100;i >= 10;i = i - 5)
		printf("\ni = %d",i);

	printf("\n\n");
	return 0;
}