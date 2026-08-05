#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nBitwise AND = %d\n", a & b);
    printf("Bitwise OR  = %d\n", a | b);
    printf("Bitwise XOR = %d\n", a ^ b);
    printf("Left Shift  = %d\n", a << 1);
    printf("Right Shift = %d\n", a >> 1);

    return 0;
}