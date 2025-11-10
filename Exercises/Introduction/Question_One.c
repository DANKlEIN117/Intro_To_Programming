#include<stdio.h>
void main()
{

    float first_num, second_num, third_num, sum,product, average;

    printf("Enter the first number: ");
    scanf("%f",&first_num);

    printf("Enter the second number: ");
    scanf("%f",&second_num);

    printf("Enter the third number: ");
    scanf("%f",&third_num);

    sum = first_num + second_num + third_num;
    product = first_num * second_num * third_num;
    average = sum/3;

    printf("\n The sum is: %.2f\n", sum);
    printf("\n The product is: %.2f\n", product);
    printf("\n The average is: %.2f\n\n", average);

}
