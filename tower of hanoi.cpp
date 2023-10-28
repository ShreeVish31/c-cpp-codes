#include <stdio.h>

#define MAX_DISKS 100


void towerOfHanoi(int num_disks, 
int source[], int destination[], int auxiliary[], 
int* source_top, int* destination_top, 
int* auxiliary_top,char source_name, char destination_name, char auxiliary_name);
void push(int stack[], int *top, int disk);
int pop(int stack[], int *top);

int main() {
    int source[MAX_DISKS], destination[MAX_DISKS], auxiliary[MAX_DISKS];
    int source_top = -1, destination_top = -1, auxiliary_top = -1;
    int num_disks, i;

    printf("Enter the number of disks (max %d): ", MAX_DISKS);
    scanf("%d", &num_disks);

    
    for (i = num_disks; i > 0; i--) {
        push(source, &source_top, i);
    }

    printf("\nOriginal state of the towers:\n");
    printf("Source Tower: ");
    for (i = source_top; i >= 0; i--) {
        printf("%d ", source[i]);
    }
    printf("\n");

    printf("Destination Tower: ");
    for (i = destination_top; i >= 0; i--) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    printf("Auxiliary Tower: ");
    for (i = auxiliary_top; i >= 0; i--) {
        printf("%d ", auxiliary[i]);
    }
    printf("\n");

    printf("\nTower of Hanoi solution:\n");
    towerOfHanoi(num_disks, source, destination, auxiliary, &source_top, &destination_top, &auxiliary_top,'A','B','C');

    printf("\nFinal state of the towers:\n");
    printf("Source Tower: ");
    for (i = source_top; i >= 0; i--) {
        printf("%d ", source[i]);
    }
    printf("\n");

    printf("Destination Tower: ");
    for (i = destination_top; i >= 0; i--) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    printf("Auxiliary Tower: ");
    for (i = auxiliary_top; i >= 0; i--) {
        printf("%d ", auxiliary[i]);
    }
    printf("\n");

    return 0;
}

void push(int stack[], int *top, int disk) {
    if (*top == MAX_DISKS - 1) {
        printf("Stack overflow!\n");
        return;
    }
    stack[++(*top)] = disk;
}

int pop(int stack[], int *top) {
    if (*top == -1) {
        printf("Stack underflow!\n");
        return -1;
    }
    return stack[(*top)--];
}

void towerOfHanoi(int num_disks, int source[], int destination[], int auxiliary[], int* source_top, int* destination_top, int* auxiliary_top,char source_name, char destination_name, char auxiliary_name) {

    if (num_disks == 1) {
        
        int disk = pop(source, source_top);
        push(destination, destination_top, disk);
        printf("Move disk %d from %c to %c\n", disk,source_name, destination_name);
    } else {
        
        towerOfHanoi(num_disks - 1, source, auxiliary, destination, source_top, auxiliary_top, destination_top,source_name,auxiliary_name,destination_name);

    
        int disk = pop(source, source_top);
        push(destination, destination_top, disk);
        printf("Move disk %d from %c to %c\n", disk,source_name, destination_name);

        
        towerOfHanoi(num_disks - 1, auxiliary, destination, source, auxiliary_top, destination_top, source_top,auxiliary_name,destination_name,source_name);
    }
}


