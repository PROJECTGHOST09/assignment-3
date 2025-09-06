#include <stdio.h>
int main()
{
    printf(" To add  the digits in any numbers\n");
    printf("Enter any number:\n");
    int num ,s=0;
    scanf("%d", &num);
    while (num>0){
        s += num%10;   // the remainder when divided by 10 is the last digit and add it to sum
        num/=10;

    }
    printf("The sum of digits is: %d\n", s);
}