#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    float average;

    printf("\nEnter the marks separated by a space: ");
    scanf("%d %d %d %d %d",&a,&b, &c, &d, &e);


    if (a<0||a>100||b<0||b>100||c<0||c>100||d<0||d>100||e<0||e>100)
    {
        /* code */
        printf("\nEnter a Valid Marks to calculate the average\n\n");
        
    }else{

        average = (float)(a + b + c + d + e)/5;

        if (average >= 0 && average <50)
        {
            /* code */
            printf("\nThe Average Mark: %.2f\nMerit: Fail\n\n",average);
        }else if (average >= 50 && average < 65)
        {
            /* code */
            printf("\nThe Average Mark: %.2f\nMerit: Pass\n\n",average);
            
        }else if (average >= 65 && average < 75)
        {
            /* code */
            printf("\nThe Average Mark: %.2f\nMerit: Credit\n\n",average);
        }else if (average >= 75 && average <=100)
        {
            /* code */
            printf("\nThe Average Mark: %.2f\nMerit: Distinction\n\n",average);
        }else
        {
            printf("\nError: Invalid Marks!!\n\n");
        }
        return 0;
}
}