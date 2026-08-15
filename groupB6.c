#include <stdio.h>

#define MAX 100

int heap[MAX];
int size = 0;

// Function to swap elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Heapify-up for insertion
void heapifyUp(int index) {
    int parent = (index - 1) / 2;

    if (index > 0 && heap[parent] > heap[index]) {
        swap(&heap[parent], &heap[index]);
        heapifyUp(parent);
    }
}

// Insert element in min-heap
void insert(int value) {
    if (size >= MAX) {
        printf("Heap is full!\n");
        return;
    }

    heap[size] = value;
    heapifyUp(size);
    size++;
}

// Heapify-down for deletion
void heapifyDown(int index) {
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int smallest = index;

    if (left < size && heap[left] < heap[smallest])
        smallest = left;

    if (right < size && heap[right] < heap[smallest])
        smallest = right;

    if (smallest != index) {
        swap(&heap[index], &heap[smallest]);
        heapifyDown(smallest);
    }
}

// Delete minimum (root) from heap
void deleteMin() {
    if (size == 0) {
        printf("Heap is empty!\n");
        return;
    }

    printf("Deleted element: %d\n", heap[0]);
    heap[0] = heap[size - 1];
    size--;
    heapifyDown(0);
}

// Display the heap
void display() {
    printf("Min-Heap: ");
    for (int i = 0; i < size; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

// Main program
int main() {
    int choice, value;

    while (1) {
        printf("\n1. Insert\n2. Delete Min\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insert(value);
            break;
        case 2:
            deleteMin();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
