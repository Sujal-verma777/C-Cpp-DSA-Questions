#include <stdio.h>

int main()
{
    int age, marks;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("\nEligible using AND : %d\n", age >= 18 && marks >= 40);
    printf("Eligible using OR  : %d\n", age >= 18 || marks >= 40);
    printf("NOT of age>=18     : %d\n", !(age >= 18));

    return 0;
}