#include<stdio.h>
#include<stdlib.h>
int choice,no,source;

struct node{

        int data;
        struct node *prev;
        struct node *next;

}*head=NULL,*last = NULL;

void insertlast(int no){

    struct node *temp = NULL;
    if(head==NULL)
    {
        head = malloc(sizeof( struct node*));
        head->data = no;
        head->next = NULL;
        head->prev = NULL;
        last= head;
    }
    else{
        temp =  malloc(sizeof(struct node *));
        temp->data = no;
        temp->next = NULL;
        temp->prev = last;
        last->next = temp;
        last = temp;
    }

}

void insertbegin(int no)
{
     struct node *temp ;
    if(head==NULL)
    {
        insertlast(no);
    }
    else{
        temp =  malloc(sizeof(struct node *));
        temp->data = no;
        temp->next = head;
        head = temp;
        temp->prev = NULL;

    }
}
void insertrandom(int source,int no)
{
    struct node *temp ;
    struct node *p;

    for(p=head;p!=NULL;p=p->next)
    {
        if(p->data==source)
        {
            break;
        }
    }
    if(p!=NULL)  // 23 24 30  90
    {
        temp = malloc(sizeof(struct node *));
        temp->data = no;
        temp->next = p->next;
        temp->prev = p;
        p->next = temp;
        // p->prev = temp;
    }

}
void deletelast()
{
    struct node *p;
    for(p=head;p->next!=last;p=p->next);
    p->next = NULL;
    head -> prev = NULL;  
    free(p);
    last = p;
}   
void deletebegin()
{
    struct node *p;
    p=head;
    head= head->next;
    p->prev = NULL;
    free(p);
}

void display()
{
    struct node *i;
    for(i=head;i!=NULL;i=i->next)
    {
        printf("%d\t",i->data);
    }
}

void main()
{

     while(1)
    {
    printf("\n1>>insert in begening "); 
    printf("\n2>>insert in last ");
    printf("\n3>>insert in random ");
    printf("\n4>>delete in begening ");
     printf("\n5>>delete in last ");
      printf("\n6>>delete in random ");
     printf("\n7>>display ");
      printf("\n8>>exit");

    printf("\nEnter a choice:");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("\nEnter a number:");
        scanf("%d",&no);
        insertbegin(no);
        break;

    case 2:
        printf("\nEnter a number:");
        scanf("%d",&no);
        insertlast(no);
        break;

    case 3:
        printf("\nEnter a source:");
        scanf("%d",&source);
         printf("\nEnter a number:");
        scanf("%d",&no);
        insertrandom(source,no);
        break;

    case 4:
        deletebegin();
        break;
    case 5:
        deletelast();
        break;


    case 7:
    display();   
    break;

    case 8:
    exit(0);
    }
    }
}