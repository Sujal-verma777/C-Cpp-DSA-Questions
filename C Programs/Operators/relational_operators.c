#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\n%d == %d : %d\n", x, y, x == y);
    printf("%d != %d : %d\n", x, y, x != y);
    printf("%d > %d : %d\n", x, y, x > y);
    printf("%d < %d : %d\n", x, y, x < y);
    printf("%d >= %d : %d\n", x, y, x >= y);
    printf("%d <= %d : %d\n", x, y, x <= y);

    return 0;
}