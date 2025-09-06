#include <stdio.h>
int main()
{
    printf("To find the prime factors of a number\n");
    printf("Enter any number:\n");
    int num, i;
    scanf("%d", &num);
    for (i=2; i<=num; i++)
    {
        while (num%i == 0)
        {
            printf("%d ", i);
            num = num/i;
        }
    }
}