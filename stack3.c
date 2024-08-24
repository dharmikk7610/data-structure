/********************************************
    NAME : DHARMIK PRAJAPATI
    TOPIC : DELETE THE MID VALUE IN ARRAY
    DATE : 16/07/24
***************************************/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int st[5],value,i,top=-1,x;

void push(int value)
{
    top++;
    st[top] = value;
}
void display()
{
    x=top/2;
    for(i=top;i>=0;i--)
    {
        if(st[x]==st[i])
        {
            continue;
        }
        else{
            printf("%d",st[i]);
        }
    }
}
void main()
{
    while(1)
    {

     int choice;

        printf("\n1.push");
        printf("\n2.display");
        printf("\n3.exit");
        printf("\n

               Enter the choice:");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("\nEnter a value:");
            scanf("%d",&value);
            push(value);
            break;
        case 2:
            display();
            break;

        case 3:
            exit(0);
        }
    }//while end


}
