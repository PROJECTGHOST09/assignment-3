#include <stdio.h>
int main ()
{
    printf(" TO find the sum and mean of the 10 valuse from the users : \n");
    int i,n;
    float sum=0, mean;
    for (i=1;i<=10;i++)
    {
        printf("Enter the value %d : ",i);
        scanf("%d",&n);
        sum=sum+n;
    }
    mean=sum/10;
    printf("The sum of the 10 values is : %f\n",sum);
    printf("The mean of the 10 values is : %.f\n",mean);

}