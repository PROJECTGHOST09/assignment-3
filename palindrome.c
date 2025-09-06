#include <stdio.h>
int main()
{
    printf("To check whether a number is palindrome or not\n");
    printf("Enter any number:\n");
    int num, r=0, t;
    scanf("%d", &num);
    while (num>0)
    {
        t = num%10;   // to get the last digit
        r = r*10 + t; // to add the last digit to r
        num /= 10;       // to remove the last digit
        //after last digit num becomes 0 and loop ends
    }
    if (r == num)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
}