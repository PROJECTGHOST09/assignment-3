#include <stdio.h>
int main ()
{
    printf(" TO find the sum and mean of the n values from the users : \n");
    int i,n,f;
    float sum=0, mean;
    printf("Enter the number of values you want to input: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("Enter the value %d : ",i);
        scanf("%d",&f);
        sum=sum+f;
    }
    mean=sum/n;
    printf("The sum of the %d values is : %f\n",n,sum);
    printf("The mean of the %d values is : %.f\n",n,mean);

}