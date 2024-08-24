/*Input: s = "leet**cod*e"
Output: "lecoe"
Explanation: Performing the removals from left to right:
- The closest character to the 1st star is 't' in "leet**cod*e". s becomes "lee*cod*e". */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 10
int choice,top=-1;
char c ,arr[size],name[20];

void push(char c){
    if(top==size-1){
        printf("Stack is full\n");
    }
    else{
        if(c!='*')
        {
            arr[++top]=c;
        }
        else{
            top--;
        }
    }

}
void display(){
    int i;
    if(top==-1){
        printf("stack is underflow");
    }
    else{
        for(i=top;i>=0;i--)
        {
            printf("%c\t",arr[i]);  
        }
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
        printf("Enter a String :");
        fflush(stdin);
        gets(name);
        for(int i=0;i<=strlen(name);i++)
        {
            push(name[i]);
        }

            break;

        case 2:
            display();
            break;
        
        case 3:
        exit(0);

    }
}}