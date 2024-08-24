#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *last = NULL,*head = NULL;

void AddNode( int no)
{
    struct node *temp = NULL;

    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node *));
        head->data = no;
        head->next = NULL;
        last = head;
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node *));
        temp->data = no;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void find(int key){
    struct node *find = head;

    while(find!=NULL){
    if(find->data ==key){
        printf("data fount");
        break;;
    }
    else{
        find = find->next;
    }}
}

int main()
{


    AddNode(10);
    AddNode(20);
    AddNode(30);
    AddNode(40);
    AddNode(50);


    printf("%d", head->data);
    printf("%d", head->next->data);
    printf("%d", head->next->next->data);
    printf("%d", head->next->next->next->data);
    printf("%d", last->data);

    int key =20;
    find(key);

    return 0;
}
