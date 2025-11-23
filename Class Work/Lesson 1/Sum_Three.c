#include<stdio.h>
int main()
{
 float first_num, second_num, total;

 printf("\n\nEnter two numbers -> ");
 scanf("%f %f",&first_num,&second_num);

 total = first_num + second_num;

 printf("\nThe sum of %.2f and %.2f is %.2f\n\n", first_num, second_num, total);
 return 0;
}
