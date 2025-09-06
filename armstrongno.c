#include<stdio.h>
int main()
{
    printf(" To check whether a number is an Armstrong number or not\n");
    printf("Enter any number:\n");
    int num, r,sum;
    scanf("%d", &num);
    while (num!=0)
    {
        r=num%10;   // to get the last digit
        sum += r*r*r; // to add the last digit to r
        num /= 10;       // to remove the last digit    
    }
    if (sum==num)
    {
        printf("The number is an Armstrong number.\n");
    }
    else
    {
        printf("The number is not an Armstrong number.\n");
    }
}
