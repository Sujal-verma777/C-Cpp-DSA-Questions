#include <stdio.h>

int main()
{
    int integer = 10;
    float decimal = 15.5;
    double largeDecimal = 25.987654;
    char letter = 'C';

    printf("Integer = %d\n", integer);
    printf("Float = %.2f\n", decimal);
    printf("Double = %.6lf\n", largeDecimal);
    printf("Character = %c\n", letter);

    return 0;
}
