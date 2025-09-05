#include <stdio.h>
int main()
{
    printf("TO find the sum of the N odd numbers \n");
    printf("Enter the number of odd numbers you want to sum : ");
    int n,i,s=0;
    scanf("%d",&n);
    for (i=1;i<=n ;i++)
    {
        if(i%2!=0)
        {
            s=s+i;
        }
    }
    printf("Sum of the first %d odd numbers is %d\n", n, s);
}