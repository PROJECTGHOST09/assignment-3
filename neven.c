#include <stdio.h>
int main()
{
    printf("To print the first n odd natural numbers .\n");
    printf("Enter the value of n: ");
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        if (i%2==0) {
            printf("%d ", i);
        }
    }
    return 0;
}