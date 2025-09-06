#include <stdio.h>
int main()
{
    printf("To seperate the digits of any numbers\n");
    printf("The digits are:\n");
    int num;
    scanf("%d", &num);
    while(num>0)
    {
        printf("%d\n", num%10);   // to get the last digit
        num /= 10; // to remove the last digit
        //after last digit num becomes 0 and loop ends
    }
}