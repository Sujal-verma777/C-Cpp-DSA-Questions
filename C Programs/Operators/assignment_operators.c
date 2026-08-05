#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Initial Value = %d\n", number);

    number += 5;
    printf("After += 5 : %d\n", number);

    number -= 3;
    printf("After -= 3 : %d\n", number);

    number *= 2;
    printf("After *= 2 : %d\n", number);

    number /= 2;
    printf("After /= 2 : %d\n", number);

    return 0;
}