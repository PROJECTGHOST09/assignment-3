#include <stdio.h>
int main()
{
    printf(" TO find the numbers divisible by 13 and their sum between 1-100 \n");
    int s=0;
    for (int i=1;i<=100;i++)
    {
        if(i%13==0)
        {
            s=s+i;
        }
    }
    printf("The sum of numbers divisible by 13 between 1-100 is: %d\n", s);
}