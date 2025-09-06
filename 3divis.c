#include <stdio.h>
int main()
{
    printf("TO print the sum of  numbers divisible between 1 to 100 by 3\n");
    int sum = 0;
    for(int i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            sum += i;
        }
    }
    printf("The sum is: %d\n", sum);
    
}