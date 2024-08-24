// "Asteroid Collision" 

#include<stdio.h>
#include<stdlib.h>
#define size 5
int no,choice;
int arr[size],top=-1,alive=1;
void push(int no)
{
    if(top==size-1)
    {
        printf("\nstack is overflow..");

    }
    // else{
    //     if(no>0)
    //     {
    //         top++;
    //         arr[top]=no;
    //     }
        else{
        while(top==-1)
        {
        
            if(-no>arr[top])
            {
                top--;
            }
            else if(-no == arr[top])
            {
                top--;
                alive=0;
            }
            else{
                break;
                 alive=0;
            }
        }
        }
        if(alive)
        {
            top++;
            arr[top]=no;
        }
    }



void display()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void main()
{
     while(101)
    {
    printf("\n1..push");
    printf("\n2..display");
    printf("\n3..exit");
    printf("\n..Enter a choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("Enter a number :");
        // fflush(stdin);
        scanf("%d",&no);
            push(no);
            break;

        case 2:
            display();
            break;
        
        case 3:
        exit(0);

    }
    }//while end
}