#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void maxHeapify(int arr[], int n, int i) {
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2; 

    
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        
        maxHeapify(arr, n, largest);
    }
}


void insertMaxHeap(int arr[], int *n, int element) {
    
    (*n)++;
    int i = (*n) - 1; 

    
    arr[i] = element;

    
    while (i > 0 && arr[(i - 1) / 2] < arr[i]) {
        swap(&arr[i], &arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

int main() {
    int arr[100]; 
    int n = 0; 
    int num_elements;

    printf("Enter the number of elements to insert into the max heap: ");
    scanf("%d", &num_elements);

    printf("Enter %d elements:\n", num_elements);
    for (int i = 0; i < num_elements; i++) {
        int element;
        scanf("%d", &element);
        insertMaxHeap(arr, &n, element);
    }

    
    printf("Max Heap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

