#include <stdio.h>

#define MAX 100

// Priority Queue Node
typedef struct {
    int data;
    int priority;
} Node;

Node heap[MAX];
int size = 0;

// Swap two nodes
void swap(Node *a, Node *b) {
    Node temp = *a;
    *a = *b;
    *b = temp;
}

// Heapify-up (for enqueue)
void heapifyUp(int index) {
    int parent = (index - 1) / 2;

    if (index > 0 && heap[parent].priority > heap[index].priority) {
        swap(&heap[parent], &heap[index]);
        heapifyUp(parent);
    }
}

// Heapify-down (for dequeue)
void heapifyDown(int index) {
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int smallest = index;

    if (left < size && heap[left].priority < heap[smallest].priority)
        smallest = left;

    if (right < size && heap[right].priority < heap[smallest].priority)
        smallest = right;

    if (smallest != index) {
        swap(&heap[index], &heap[smallest]);
        heapifyDown(smallest);
    }
}

// Enqueue operation
void enqueue(int value, int priority) {
    if (size == MAX) {
        printf("Priority Queue is full!\n");
        return;
    }

    heap[size].data = value;
    heap[size].priority = priority;
    heapifyUp(size);
    size++;
}

// Dequeue operation
int dequeue() {
    if (size == 0) {
        printf("Priority Queue is empty!\n");
        return -1;
    }

    int result = heap[0].data;
    printf("Dequeued: %d (Priority: %d)\n", heap[0].data, heap[0].priority);

    heap[0] = heap[size - 1];
    size--;
    heapifyDown(0);

    return result;
}

// Display Priority Queue
void display() {
    printf("Priority Queue (data:priority): ");
    for (int i = 0; i < size; i++)
        printf("%d:%d ", heap[i].data, heap[i].priority);
    printf("\n");
}

// Main function
int main() {
    int choice, value, priority;

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            printf("Enter priority (lower = higher priority): ");
            scanf("%d", &priority);
            enqueue(value, priority);
            break;
        case 2:
            dequeue();
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
}
