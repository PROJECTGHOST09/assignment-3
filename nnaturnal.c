#include <stdio.h>
int main()
{
    printf("To print the n numbers . \n ");
    printf("Enter a positive number : ");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++) {
        printf("%d ", i);
    }
    return 0;
}