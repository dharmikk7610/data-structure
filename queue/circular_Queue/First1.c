#include<stdio.h>
#include<stdlib.h>
#define size 6
int q[size],rear=-1,f=-1,i,j,choice,no;

void enQueue(int q[size],int no )
{
    if((rear+1)%size==f)
    {
        printf("\n Array is overflow");
    }
    else if(f==-1)
    {
        f=0;
    }
    else{
        rear = (rear+1)%size;
        q[rear]=no;
    }

}

void deQueue()
{
    if(f==-1)
    {
        printf("\nArray is under_flow");
    }
    else if(f==rear)
    {
        f=-1;
        rear=-1;
    }
    else{
        j=q[f];
        f = (f+1)%size;


    }

}
void display()
{
      if(f==-1 && rear==-1)
    {
        printf("\n Queue is empty..");
    }

   else{
    for(i=f;i<=rear;(i++)%size)
    {
        printf("%d\t",q[i]);
    }
   }
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

    }

}

