#include <stdio.h>

int main()
{
    char name[50];
    int age;
    float marks;

    printf("Enter name: ");
    scanf("%49s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter marks: ");
    scanf("%f", &marks);

    printf("\nName : %s\n", name);
    printf("Age : %d\n", age);
    printf("Marks : %.2f\n", marks);

    return 0;
}
