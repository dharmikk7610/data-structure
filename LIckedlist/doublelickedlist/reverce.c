#include<stdio.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;

}*head= NULL,*last=NULL;

void insert(int no)
{
    struct node *temp =NULL;
    if(head==NULL)
    {
        head = malloc(sizeof( struct node*));
        head->data = no;
        head->next = NULL;
        head->prev = NULL;
        last= head;
    }
    else{
        temp = malloc(sizeof(struct node*));
        temp->data = no;
        temp->next = NULL;
        temp->prev = last;
        last->next = temp;
        last = temp;
    }
}

void display()
{
    struct node *i;

    for(i=head;i!=NULL;i=i->next)
    {
        printf("%d\t",i->data);
    }
}

void reverce()
{
    struct node *p,*i;
    for(p=last;p>=head;p=p->prev)
    {
        printf("%d\t",p->data);
    }
}
void main()
{

insert(20);
insert(30);
insert(40);
insert(50);
display();
reverce();

}