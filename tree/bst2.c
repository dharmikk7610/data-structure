#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
}*root=NULL;

void inorder(struct node  *root)
{
    if(root!=NULL)
    {
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);   
    }
}
void priorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        inorder(root->left);
        inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
}}


void main()
{
    struct node  *leftnode ,*rightnode;
    root = malloc(sizeof(struct node));
    root->data = 24;
    root->left = NULL;
    root->right = NULL;

    leftnode = malloc(sizeof(struct node));
    root->left = leftnode;
    leftnode->data = 20;
    leftnode->left = NULL;
    leftnode->right = NULL;

    rightnode = malloc(sizeof(struct node));
    root->right = rightnode;
    rightnode->data= 27;
    rightnode->left = NULL;
    rightnode->right = NULL;

    inorder(root);
    printf("\n");
    priorder(root);
    printf("\n");
    postorder(root);

}