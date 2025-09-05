#include <stdio.h>
int main()
{
    printf("To print the first 10 odd natural numbers .\n");
    
    for (int i = 1; i <20; i++) {
        if (i%2!=0) {
            printf("%d ", i);
        }
    }
    return 0;
}