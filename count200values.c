#include <stdio.h>

int main() {
    int i;
    int num;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    printf("Enter 200 integer values to count positive, negative, and zeros.\n");
    for (i = 1; i <= 200; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Check if the number is positive, negative, or zero
        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zeroes: %d\n", zero_count);

    return 0;
}