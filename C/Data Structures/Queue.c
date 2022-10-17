#include<stdio.h>
#include <stdlib.h>
#define n 5

int queue[n];
int front=-1;
int rear=-1;

void printQ()
{
    int i;
    printf("The queue is: ");

    for (i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }   
    printf("\n");
}

void insert(int x)
{
    if (rear>=n)
        printf("Queue Overflow !\n");
    else if (front==-1 && rear==-1)
    { 
       front=0;
       rear=0;
       queue[rear]=x;
       printf("Inserted !\n");
       
    }
    else
    {
        rear++;
        queue[rear]=x;
        printf("Inserted !\n");

    }


} 

void delete()
{
    if (front==-1 && rear==-1)
        printf("Queue Underflow !\n");
    else if (front==rear)
    {
        printf("Removed %d from queue",queue[front]);
        front=-1;rear=-1;
        printf("Queue is empty mow !!\n");
        
    }
    else
    { 
        printf("Removed %d from queue\n",queue[front]);
        front++;
    }
 
}
void Queue(int user)
{
    int x;
    if (user==1)
    {
        printf("Enter element: ");
        scanf("%d",&x);
        insert(x);
    }
    else  if (user==2)
        delete();
    else
        printQ();
}


void main()
{
    int user;
    while(1)
    {
        printf("What would u like to do:\n  1.Insert an element\n  2.Delete an element\n  3.Display\n  4.Exit\n  -- ");
        scanf("%d",&user);
        if (user==4)
            exit(0);
        Queue(user);
    }
}
