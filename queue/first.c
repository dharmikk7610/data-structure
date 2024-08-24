#include<stdio.h>
#include<stdlib.h>
#define size 5
int q[size],rear=-1,f=-1,i,no,choice,space;

void enQueue(int q[size],int no)
{
    if(rear == size-1)
    {
        printf("\nqueue is full:");
        printf("\nspcae full");
    }

    else
    {
        rear++;
        q[rear]=no;
    }
    if(f==-1)
    {
        f=0;
    }
}
void deQueue()
{
    if(f==-1)
    {
        printf("queue is empty.. ");
    }
    else{

         if (f == rear)
        {
            printf("\n%d removed", q[f]);
            f = -1;
            rear = -1;
        }
       else{
         f++;
       }
    }
}
void display()
{
    for(i=f;i<=rear;i++)
    {
        printf("%d",q[i]);
    }
    space = size-rear+f-1;
    printf("\n%d is space empty",space);
}

void main()
{
    while(1)
    {
      printf("\n1..enqueue");
       printf("\n2..dequeue");
        printf("\n3..display");
       printf("\n4..exit");
       printf("\nEnter a choice:");
       scanf("%d",&choice);

    switch(choice)
    {
    case 1:

         printf("Enter a no you add: ");
        scanf("%d",&no);
        enQueue(q,no);
        break;

    case 2:
        deQueue();
        break;

    case 3:
         display();
         break;
    case 4:
        exit(0);
    }






}}

