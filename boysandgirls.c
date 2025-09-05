#include <stdio.h>
int main()
{   
    int code;
    int i,boys_count=0,girls_count=0;
    printf(" Code for boys is 1, for girls is 2 \n");
    for (i=0;i<5;i++)
    {
        printf("Enter the code for student %d (1/2): ", i+1);
        scanf(" %d", &code);
    }
    if (code == 1)
    {
        boys_count++;
    }
    else if (code == 2)
    {
        girls_count++;
    }
    else {
        printf("Invalid code entered. Please enter 1 for boys and 2 for girls.\n");
    }
      
    printf("Number of boys: %d\n", boys_count);
    printf("Number of girls: %d\n", girls_count);
}