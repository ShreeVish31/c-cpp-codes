#include <stdio.h>
#define MAX_SIZE 10



void enqueue(int element);
void dequeue();
void display();

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

int main() {
    int choice, element;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Insert (Enqueue)\n");
        printf("2. Delete (Dequeue)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

void enqueue(int element) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full! Cannot insert any more elements.\n");
    } else {
        if (front == -1 && rear == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = element;
        printf("Element %d has been inserted.\n", element);
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty! Cannot delete any element.\n");
    } else {
        int deletedElement = queue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
        printf("Element %d has been deleted.\n", deletedElement);
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty! Nothing to display.\n");
    } else {
        printf("Elements in the queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
