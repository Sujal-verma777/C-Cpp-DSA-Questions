#include <stdio.h>

int main()
{
    int value;

    printf("Enter a number: ");
    scanf("%d", &value);

    printf("\nPost Increment : %d\n", value++);
    printf("Current Value  : %d\n", value);

    printf("Pre Increment  : %d\n", ++value);

    printf("Post Decrement : %d\n", value--);
    printf("Current Value  : %d\n", value);

    printf("Pre Decrement  : %d\n", --value);

    return 0;
}