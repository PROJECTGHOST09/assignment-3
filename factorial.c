#include <stdio.h>
int main()
{
    printf("To find the factorial of any number. \n");
    printf("Enter a positive integer for factorial : ");
    int n,i;
    int j=1;
    scanf("%d ",&n);
    for(i=1;i<=n;i++)

    {   
        j*=i;
      
    }
    printf("Factorial of the number is %d",j);

}