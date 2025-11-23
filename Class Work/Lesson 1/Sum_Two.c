#include<stdio.h>
int main()
{
 float first_num, second_num, total;

 printf("\n\nEnter two numbers -> ");
 scanf("%f %f",&first_num,&second_num);

 total = first_num + second_num;

 printf("\nThe sum is %.2f\n\n", total);
 return 0;
}
