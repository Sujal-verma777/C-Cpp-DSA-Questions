#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    int answer = (x + y) * z;

    printf("Value of (x + y) * z = %d\n", answer);

    return 0;
}