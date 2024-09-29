//   .................... using Lickedlist..............
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
   int priorty;
}*head=NULL,*last=NULL;
void deleteany(int);
void enqueue(int no ,int priorty)
{
    struct node *temp ;
    if(head==NULL)
    {
        head = malloc(sizeof( struct node));
        head->data = no;
        head->priorty = priorty;
        head->next = NULL;
        last = head;

    }
    else{
        temp = malloc(sizeof(struct node));
        temp->data = no;
        temp->priorty = priorty;
        temp->next = NULL;
        last->next = temp;
        last = temp;
}
}

void dequeue()
{
    struct node *i;
    int max = head->priorty;
    for(i=head;i!=NULL;i=i->next)
    {
        if(i->priorty > max)
        {
            max = i->priorty;
            
        }
    }
    
    deleteany(max);
}

void deleteany(int max)  // 12 23 34 44
{
    struct node *p,*temp;
     temp = malloc(sizeof(struct node));
    p=head;
   while(p->priorty==max && p!=NULL)
   {
        p = p->next;
   }

   if(p==NULL)
   {
    printf("priority not found");

   }
   else{
    
       temp= p->next;
       p->next = temp->next;
       free(temp);


   }
}
void display()
{

    struct node *i;
    for(i=head;i!=NULL;i++)
    {
        printf("%d\t",i->data);
    }
}


void main()
{
    enqueue(12,1);
    enqueue(23,2);
    enqueue(34,13);
    enqueue(11,6);
    enqueue(17,5);
    dequeue();    
    // display();
}