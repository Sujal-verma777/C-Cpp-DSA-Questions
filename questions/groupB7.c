#include <stdio.h>

#define MAX 100

int heap[MAX];
int size = 0;

// Swap function
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Heapify-down to maintain max-heap
void heapifyDown(int index, int n) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < n && heap[left] > heap[largest])
        largest = left;

    if (right < n && heap[right] > heap[largest])
        largest = right;

    if (largest != index) {
        swap(&heap[index], &heap[largest]);
        heapifyDown(largest, n);
    }
}

// Build max-heap
void buildMaxHeap(int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapifyDown(i, n);
}

// Heap sort
void heapSort(int n) {
    buildMaxHeap(n);

    for (int i = n - 1; i > 0; i--) {
        swap(&heap[0], &heap[i]);  // Move max to end
        heapifyDown(0, i);         // Heapify reduced heap
    }
}

// Input elements
void inputElements() {
    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &heap[i]);
}

// Display array
void displayArray(int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

// Main function
int main() {
    inputElements();

    printf("Original Array: ");
    displayArray(size);

    heapSort(size);

    printf("Sorted Array (Ascending): ");
    displayArray(size);

    return 0;
}
