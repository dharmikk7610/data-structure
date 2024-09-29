#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* add(struct node *root,int data)
{
    if(root==NULL)
    {
        root = malloc(sizeof(struct node * ));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else if(data>root->data)
    {
        root->right = add(root->right,data);
    }
    else if(data<root->data)
    {
        root->left = add(root->left,data);
    }
    return root;

}

void main()
{
    struct node *root = NULL;
    root = add(root,45);
     add(root,60);
    add(root,40);
     add(root,34);

    printf("%d\t%d\t%d\t%d",root->data,root->right->data ,root->left->data,root->left->left->data);
}