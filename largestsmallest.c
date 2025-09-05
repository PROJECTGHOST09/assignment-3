#include <stdio.h>
int main ()
{
    printf(" To find the largest and smallest number among 100 values. \n");
    printf(" Enter the first number: ");
    int n,i;
    scanf("%d",&n);
    int l,s;
    l=n;
    s=n;
    for(i=2;i<=100;i++)
    {
        printf(" Enter the number %d: ",i);
        scanf("%d",&n);
        if (n>l)
        {
            l=n;
        }
        if (n<s)
        {
            s=n;
        }
    }
    printf("The largest number is %d\n",l);
    printf("The smallest number is %d\n",s);
}