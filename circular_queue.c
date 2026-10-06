#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
int isFull()
{
 if((rear+1)% MAX==front)
 {
  return 1;
 }
 return 0;
}
int isEmpty()
{
 if(front==-1 && rear==-1)
 {
  return 1;
 }
 return 0;
}
void display()
{
 int i;
 if(isEmpty())
 {
  printf("Queue is empty");
  return;
 }
 printf("Queue elements:\n");
 i=front;
 do
 {
  printf("%d\n",queue[i]);
  i=(i+1)%MAX;
 }while(i!=(rear+1)%MAX);
}
void dequeue()
{
 if(isEmpty())
 {
  printf("Queue is empty");
  return;
 }
 printf("%d is deleted", queue[front]);
 if(front==rear)
 {
  front=rear=-1;
 }
 else
 {
  front=(front+1)%MAX;
 }
} 
void enqueue()
{
 int x;
 if(isFull())
 {
  printf("Queue is Full");
  return;
 }
 printf("Enter the element to insert");
 scanf("%d",&x);
 if(isEmpty())
 {
  front=rear=0;
 }
 else
 {
  rear=(rear+1)%MAX;
 }
 queue[rear]=x;
 printf("Element %d inserted successfully",queue[rear]);
} 
void search()
{
 int key,i, found=0;
 if(isEmpty())
 {
  printf("Queue is empty");
  return;
 }
 printf("Enter the element to search:");
 scanf("%d",&key);
 i=front;
 do
 {
  if(queue[i]==key)
  {
   printf("Element %d found at position %d",key,i);
   found=1;
   break;
  }
  i=(i+1)%MAX;
 }
 while(i!=(rear+1)%MAX);
 if(!found)
 {
  printf("Element %d not found in the queue",key);
 }
}
int main()
{
 int choice;
 do
 {
  printf("\n\n---CIRCULAR QUEUE OPERATIONS---\n");
  printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Search\n5.Exit\n");
  printf("Enter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:enqueue();
   	break;
   case 2: dequeue();
   	break;
   case 3: display();
   	break;
   case 4: search();
   	break;
   case 5:printf("Program Ended\n");
   	return 0;
   default: printf("Invalid Choice\n");
  }
 }while(choice!=5);
 return 0;
}
