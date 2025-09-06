#include <stdio.h>
int main()
{
    printf ("To rverse the digits of any number\n");
    printf("Enter any number:\n");
    int num,r=0;
    scanf("%d", &num);
    while(num>0)
    {
        num /= 10; // to remove the last digit
        //after getting the last digit we now muliply r by 10 and add the last digit to r
        r = r*10 + num%10;   // to get the last digit
    }
    printf("The reverse of the number is: %d\n", r);
}