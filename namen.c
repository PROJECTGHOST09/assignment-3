#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of times you want to print the name JITRAJ: ");
    scanf("%d", &n);
    printf(" To print the name JITRAJ %d time \n", n);
    for (int i = 1; i <=n; i++) {
        printf("JITRAJ\n");
    }
}