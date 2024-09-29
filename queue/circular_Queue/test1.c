#include<stdio.h>
#define size 5
#include<stdlib.h>

int arr[size],i,j,choice,rear=-1,f=-1,no;

void enQueue(int no){
    if(rear==size-1 && f==0)
    {
        printf("Queue is full...");
    }
    else if(rear = f-1)
    {
        printf("\n queue is full..");
    }

    else{
        if(rear==size-1)
        {
            rear =0;
            arr[rear]=no;
        }
        else{
            rear++;
            arr[rear]=no;
        }
        if(f==-1)
        {
            f=0;
        }
    }
}

void deQueue()
{
    if(f==-1)
    {
        printf("\nQueue is empty ..");
    }
    else
    {
        if(rear==f)
        {
            printf("%d is deleted",arr[f]); 
            f=-1;
            rear=-1;
        }
        else if(f==size-1)
        {
             printf("%d is deleted",arr[f]);
            f=0;  
        }
        else{
             printf("%d is deleted",arr[f]);
            f++;
        }

    }
}

void display()
{
    if(f==-1){
        printf("\nQueue is empty");
    }

    else{
        if(f<=rear)
        {
            for(i=f;i<=rear;i++)
            {
                printf("\t%d",arr[i]);
            }
        }
        else{
            for(i=f;i<size;i++)
            {
                printf("\t%d",arr[i]);
            }
            for(i=0;i<=rear;i++)
            {
                printf("\t%d",arr[i]);
            }
        }
    }
}

void main()
{
    while(1)
    {


    printf("\n1..enQueue");
    printf("\n2..deQueue");
    printf("\n3..display");
    printf("\n4..exit");

    printf("\nEnter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("\nEnter a number:");
        scanf("%d",&no);
        enQueue(no);
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

