#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 20

char name[20],x,st[size],value;
int i,top=-1;

void push(char x)
{
    top++;
    st[top]=x;
    printf("%c",x);


}
void pop()
{

    top--;
     value = st[top];

    printf("delete char =%c",value);
}
void display()
{
    for(i=top;i>=0;i--)
    {
        printf("\n%c",st[i]);
    }
}

void main()
{
    while(1)
    {


    int choice;


    printf("\n1push");
    printf("\n2 pop");
    printf("\n3 display");
    printf("\n4 exit");

    printf("\nenter a choice");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter a String :");
        fflush(stdin);
        gets(name);
        for(i=0;i<=strlen(name);i++)
        {
            push(name[i]);
        }

        break;
    case 2:
        pop();
        break;

    case 3:
        display();
        break;
    case 4:
        exit(0);
    } //switch end
    }  //while end
}  //void end
