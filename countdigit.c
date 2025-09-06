#include <stdio.h>
int main()
{
    printf(" TO count the digits in any numbers\n");
    printf("Enter any number:\n");
    int num ,c=0;
    scanf("%d", &num);
    while (num>0){
        num/=10; // to remove the last digit
        c++; //to count the digits
    }
    printf("The total digits are: %d\n", c);
}