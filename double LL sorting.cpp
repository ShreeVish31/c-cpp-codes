#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* prev;
struct Node* next;
};
struct Node *head=NULL, *current;
void append(int data)
{
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->prev = NULL;
newNode->next = NULL;
if (head == NULL)
{
head = newNode;
}
else
{
current = head;
while (current->next != NULL) {
current = current->next;
}
current->next = newNode;
newNode->prev = current;
}
}
void display() {
current = head;
while (current != NULL) {
printf("%d ", current->data);
current = current->next;
}
printf("\n");
}
void swapNodes(struct Node* node1, struct Node* node2) {
int temp = node1->data;
node1->data = node2->data;
node2->data = temp;
}
void bubbleSort() {
if (head == NULL || head->next == NULL)
{
printf("List is empty or has only one element, no need to sort");
}
int swapped;
struct Node* current;
struct Node* last = NULL;
do {
swapped = 0;
current = head;
while (current->next != last) {
if (current->data > current->next->data) {
swapNodes(current, current->next);
swapped = 1;
}
current = current->next;
}
last = current;
} while (swapped);
}
int main()
{
append(4);
append(2);
append(1);
append(5);
append(8);
display();
bubbleSort();
display();
return 0;
}
