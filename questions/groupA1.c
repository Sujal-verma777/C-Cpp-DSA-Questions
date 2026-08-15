#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int power;
    struct Node* next;
};

// Function to create a new term in the polynomial
void createTerm(struct Node** poly, int coeff, int power) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->power = power;
    newNode->next = NULL;

    if (*poly == NULL) {
        *poly = newNode;
    } else {
        struct Node* temp = *poly;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

// Function to display the polynomial
void display(struct Node* poly) {
    while (poly != NULL) {
        printf("%dx^%d", poly->coeff, poly->power);
        if (poly->next != NULL)
            printf(" + ");
        poly = poly->next;
    }
    printf("\n");
}

// Function to add two polynomials
struct Node* addPolynomials(struct Node* p1, struct Node* p2) {
    struct Node* result = NULL;

    while (p1 && p2) {
        if (p1->power > p2->power) {
            createTerm(&result, p1->coeff, p1->power);
            p1 = p1->next;
        } else if (p1->power < p2->power) {
            createTerm(&result, p2->coeff, p2->power);
            p2 = p2->next;
        } else {
            createTerm(&result, p1->coeff + p2->coeff, p1->power);
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    while (p1) {
        createTerm(&result, p1->coeff, p1->power);
        p1 = p1->next;
    }

    while (p2) {
        createTerm(&result, p2->coeff, p2->power);
        p2 = p2->next;
    }

    return result;
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result = NULL;
    int n, coeff, power;

    printf("Enter number of terms in Polynomial 1: ");
    scanf("%d", &n);
    printf("Enter terms in format (coefficient power):\n");
    for (int i = 0; i < n; i++) {
        printf("Term %d: ", i + 1);
        scanf("%d%d", &coeff, &power);
        createTerm(&poly1, coeff, power);
    }

    printf("Enter number of terms in Polynomial 2: ");
    scanf("%d", &n);
    printf("Enter terms in format (coefficient power):\n");
    for (int i = 0; i < n; i++) {
        printf("Term %d: ", i + 1);
        scanf("%d%d", &coeff, &power);
        createTerm(&poly2, coeff, power);
    }

    printf("\nPolynomial 1: ");
    display(poly1);

    printf("Polynomial 2: ");
    display(poly2);

    result = addPolynomials(poly1, poly2);

    printf("Sum: ");
    display(result);

    return 0;
}
