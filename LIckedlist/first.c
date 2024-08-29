#include<stdio.h>
#include<stdlib.h>
int choice,no,source,rt;

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

    p=head;
    while(p->data!=source)
    {
        p=p->next;
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
    struct node *temp ;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
    }

    temp->next= NULL;
    free(temp);

   
}   
void deletebegin()
{
    struct node *p;
    p=head;
    head= head->next;
    p->prev = NULL;
    free(p);
}

void deleterandom(int source)
{
    struct node *temp;
    struct node *p;
    p=head;

    while(p->data!=source &&p->next!=NULL)
    {
        p=p->next;
    } 
   p->next = temp;
   p->next = temp->next;
   temp->prev = p;    
   free(temp);
}

void rotate(int n)
{
    int x;
    struct node *p;
    struct node *j,*s;
    for(int i=1;i<=n;i++) 
    {
        x=last->data;
        // printf("%d",x);

        
        for(j=head;j<last;j=j->next)
        {
            // x = p->data ;
            j->next->data=j->data;       

        }
            head->data = p->data;
        

    }
    
   for(s=head;s!=NULL;s=s->next)
    {
        printf("%d\t",s->data);
    }
}

void sort()
{
    struct node *i, *j;
    for (i = head; i->next != NULL; i = i->next)
    {
       for(j = i->next;j!=NULL;j = j->next)
       {
        if(i->data > j->data)
        {
            int temp = i->data;
            i->data = j->data;
            j->data = temp;
        }
       }
    }    

    for(i=head; i->next!=NULL;i=i->next)
    {
        printf("%d\t",i->data);
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

     while(1)
    {
    printf("\n1>>insert in begening "); 
    printf("\n2>>insert in last ");
    printf("\n3>>insert in random ");
    printf("\n4>>delete in begening ");
     printf("\n5>>delete in last ");
      printf("\n6>>delete in random ");
     printf("\n7>>display ");
     printf("\n8>> Sorting:");
     printf("\n9>>reverce");
      printf("\n10>>rotate no..");

      printf("\n11>>exit");

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
    case 6:
     printf("\nEnter a source:");
        scanf("%d",&source);
    deleterandom(source);
    break;


    case 7:
    display();   
    break;

    case 8:
        sort();
        break;

    case 11:
    exit(0);
    case 9:
   reverce();
    break;

    case 10:
    printf("how many time rotate:");
    scanf("%d",&rt);
    rotate(rt);
    break;

    }
    }
}