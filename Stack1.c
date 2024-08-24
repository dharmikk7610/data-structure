#include<stdio.h>
#include<stdlib.h>
#define size 5

int  no;
int top=-1,a[size];

void push(int no)
{
    if(top==size-1)
    {
        printf("stack is over flow");
    }
    else{
        top++;
        a[top]=no;
        printf("\n %d is inserted",no);
    }
    }
    void pop()
    {
        if(top==-1)
        {
            printf("Stack is empty");
        }
        else{
            top--;
            no=a[top];
            printf("\n%d is deleted",no);
        }
    }

void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("\n%d",a[i]);
    }

}





void main()
{
    while(1)
    {


    int choice;
    printf("\n1>>push &&2>> pop &&3>>display &&4>>Exit");
    printf("\nEnter the choice:");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter the number");
        scanf("%d",&no);
        push(no);
        break;

    case 2:
        pop();
        break;

    case 3:
        display();
        break;

    case 4:
        exit(0);
    }
    }
}

