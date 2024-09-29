#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;

}*root=NULL;

void main()
{
    struct node *leftchild ,*rightchild;

    root =  malloc(sizeof(struct node));
    root->data = 10;
    root->left = NULL;
    root->right =NULL;

    leftchild = malloc(sizeof(struct node));
    root->left = leftchild;
    leftchild->data = 20;
    leftchild->left = NULL;
    leftchild->right = NULL;

    rightchild = malloc(sizeof(struct node));
    root->right = rightchild;
    rightchild->data = 30;
    rightchild->left = NULL;
    rightchild->right = NULL;

    printf("%d %d %d",root->data,root->left->data,root->right->data);
}