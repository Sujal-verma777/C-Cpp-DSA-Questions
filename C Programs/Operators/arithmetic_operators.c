#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nSum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    if (b != 0)
    {
        printf("Quotient = %.2f\n", (float)a / b);
        printf("Remainder = %d\n", a % b);
    }
    else
    {
        printf("Division and remainder are not possible.\n");
    }

    return 0;
}