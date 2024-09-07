#include <stdio.h>
void enqueue();
void dequeue();
void display();
int a[50],front=-1,rear=-1,size,i,item;
int main()
{    int choice=0;
     printf("Enter the size of queue: ");
     scanf("%d",&size);   
     while(choice!=4)
     {
     	printf("Enter Operation to perform on Queue: \n1. Enqueue 2. Dequeue 3. Display 4. Exit \n");
     	scanf("%d",&choice);
     	switch(choice)
     	{
     		case 1: enqueue();
     			break;
		case 2: dequeue();
			break;
		case 3: display();
			break;
		case 4: printf("Exited from program\n");
		        break;
	}
      }
 }
 void enqueue()
 {
   if(front==(rear+1)%size)
   {
      printf("overflow\n");
   }
   else if (front==-1 && rear==-1)
   {
      front=0;rear=0;
      printf("enter the element to be inserted\n");
      scanf("%d",&item);
      a[rear]=item;
   }
   else
   {
      rear=(rear+1)%size;
      printf("enter the element to be inserted\n");
      scanf("%d",&a[rear]);
      a[rear]=item;
   }
 }
 void dequeue()
 {
    if (front==-1 && rear==-1)
    {
       printf("underflow\n");
    }
    else if (front==rear)
    {
       item=a[front];
       printf("deleted item is %d\n",item);
       front=-1;rear=-1;
    }
    else
    {
       item=a[front];
       printf("deleted element is %d\n",item);
       front=(front+1)%size;
    }
 }
 void display()
 {
    if (front==-1 && rear==-1)
    {
       printf("queue is empty\n");
    }
    else
    {
       printf("the queue is\n");
       for (i=front;i<=rear;i++)
       {
          printf("%d\t",a[i]);
       }
       printf("\n");
    }
 }
