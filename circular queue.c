#include <stdio.h>
# define max 3
int queue[max]; 
int front=-1;
int rear=-1;
void enqueue(int element)
{
 if((rear+1)%max==front)
 {
 printf("Queue is full");
}
 else if(front==-1 && rear==-1) 
 {
 front=0;
 rear=0;
 queue[rear]=element;
printf("\tInserted at %d", rear);
 }
 else
 {
 rear=(rear+1)%max;
 queue[rear]=element;
printf("\tInserted at %d", rear);
 }
}

int dequeue()
{
 if((front==-1) && (rear==-1)) // condition to check queue is empty
 {
 printf("\nQueue is underflow..");
 }
else if(front==rear)
{
 printf("\nThe dequeued element is %d", queue[front]);
 printf("\tDeleted from %d", front);
 front=-1;
 rear=-1;
}
else
{
 printf("\nThe dequeued element is %d", queue[front]);
 printf("\tDeleted from %d", front);
 front=(front+1)%max;
}
}

void display()
{
 int i=front;
 if(front==-1 && rear==-1)
 {
 printf("\n Queue is empty..");
 }
 else
 {
 printf("\nElements in a Queue are :");
for(i=0;i<front;i++)
{
printf("%d, ",queue[i]);
}
for(i=front;i<max;i++)
{
printf("%d, " ,queue[i]);
}
 }
}
int main()
{
 int choice=1,x;

 while(choice<4 && choice!=0)
 {
 printf("\n Press 1: Insert an element");
 printf("\nPress 2: Delete an element");
 printf("\nPress 3: Display the element");
 printf("\nEnter your choice:");
 scanf("%d", &choice);

 switch(choice)
 {

 case 1:
 printf("Enter the element which is to be inserted");
 scanf("%d", &x);
 enqueue(x);
 break;
 case 2:
 dequeue();
 break;
 case 3:
 display();
break;
 default: printf("\nWrong selection!!! Try again!!!");

 }}
 return 0;
} 
