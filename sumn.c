#include <stdio.h>
int main()
{
    printf(" TO find the the sum of the n numbers \n");
    printf("Enter a positive integer : \n");
    int n,i ,s=0;
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        s=s+i;
    }
    printf("Sum of the n numbers is %d",s);
}