#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node* next;

}*head=NULL,*last=NULL;
int choice,no,source;

void insertlast(int no)
{
    struct node *temp = NULL;
    if(head==NULL)
    {
        head = malloc(sizeof(struct node *));
        head->data = no;
        head->next = NULL;
        last = head;
    }
    else{
        temp = malloc(sizeof(struct node *));
        temp->data = no;
        temp->next = NULL;
        last->next = temp;
        last = temp;

    }

}

void  insertatbeg(int no){
    struct node *temp = NULL;
    if(head==NULL){
        insertlast(no);
    }
    else{
      temp = malloc(sizeof(struct node *));
      temp->data = no;
      temp->next = head;
      head = temp;

    }
}

void insertrandom(int no , int source)
{
    struct node *temp ;
    struct node *p ;
    p= head;

    while(p!=NULL)
    {
        if(p->data == source)
        {
            break;
        }
        else{
            p=p->next;
        }
    }

    if(p!=NULL)
    {
        temp = malloc(sizeof(struct node* ));
       temp->data = no;
       temp->next = p->next;
       p->next = temp; 
    }
    else{
        printf("\ncant store number....");
    }

}

void deletelast()
{
    struct node *p;
   
    for (p = head; p->next != last; p = p->next)
        ;

    p->next = NULL;
    free(last);
    last = p;

}
void deletebegin()
{
    struct node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);

}
void deleterandom(int source){
    struct node *p;
    struct node *ptr;
    ptr = malloc(sizeof(struct node *));
    p=head;
    while(p->data=source && p!=NULL)
    {
        p=p->next;
                
    }  // 23 34 45  55
    if(p==NULL)
    {
        printf("\nSource is not found..");
    }
    else{
        ptr = p->next;
        p->next = ptr->next;
        free(ptr);
    }



}

void display()
{
    struct node *i;
    for(i=head;i!=NULL;i=i->next)
    {
        printf("%d\n",i->data);
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
        printf("enter a number:");
        scanf("%d",&no);
        insertatbeg(no);
        break;

    case 2:
         printf("enter a number:");
        scanf("%d",&no);
        insertlast(no);
        break; 

    case 3:

         printf("enter a number:");
        scanf("%d",&no);
           printf("\nEnter the location after which you want to insert ");  
        scanf("\n%d",&source);  
        insertrandom(no,source);
        break;

    case 4:
    deletebegin();
    break;
    
    case 5:
        deletelast(); 
        break;
    case 6:
        printf("\nenter a sounrce:");
        scanf("%d",&source);
        deleterandom(source);
        break;

    case 7:
    display();   
    break;

    case 8:
    exit(0);
    }
    }
}