#include <stdio.h>
int main()
{
    printf("TO print the numbers divisible between 1 to 100 by 5\n");
    for(int i=1;i<=100;i++)
    {
        if(i%5==0)
        {
            printf("%d\n",i);
        }
    }
}