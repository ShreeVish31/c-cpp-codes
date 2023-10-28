#include <stdio.h>
 #include<conio.h>
 void merge(int arr[], int beg, int mid, int end)
 {
 int n1 = mid - beg + 1;
 int n2 = end - mid;

 int a[n1], b[n2];

 for (int i = 0; i < n1; i++)
 {
 a[i] = arr[beg + i];
 }

 for (int j = 0; j < n2; j++)
 {
 b[j] = arr[mid + 1 + j];

 }

 int i, j, k;
 i = 0;
 j = 0;
 k = beg;

 while (i < n1 && j < n2)
 {
 if (a[i] <= b[j])
 {
 arr[k] = a[i];
 i++;
 } else
 {
 arr[k] = b[j];
 j++;
}
 k++;
 }

 while (i < n1)
 {
 arr[k] = a[i];
i++;
k++;
 }

 while (j < n2)
 {
 arr[k] = b[j];
 j++;
 k++;
 }
 }

 void mergeSort(int arr[], int beg, int end) {
 if (beg < end) {

 int mid = beg + (end - beg) / 2;

 mergeSort(arr, beg, mid);
 mergeSort(arr, mid + 1, end);

 merge(arr, beg, mid, end);
 }
 }

 void printArray(int arr[], int size) {
 for (int i = 0; i < size; i++)
 printf("%d\t", arr[i]);
 printf("\n");
 }

 int main()
 {
 int n;
 printf("\n\t\t MERGE SORT\n");
 printf("\nEnter size of array : \n");
 scanf("%d", &n);
 int arr[n];
 printf("Enter elements of array : \n");
 for (int i = 0; i < n; i++)
 {
 scanf("%d", &arr[i]);
 }

 printf("Unsorted array: \n");
 printArray(arr, n);
 mergeSort(arr, 0, n - 1);

 printf("Sorted array: \n");
 printArray(arr, n);
 return 0;
 }
