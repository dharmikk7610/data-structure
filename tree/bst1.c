#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;

}*root=NULL;
int search(struct node *root, int no);


void main()
{
    struct node *leftchild ,*rightchild;
    int ans;

      root=  malloc(sizeof(struct node));
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
    ans = search(root,30);
    printf("sucess:%d\t",ans);
}
int search(struct node *root,int no)
{
    if(root==NULL)
    {
        return 0;
    }
    else{
        if(root->data==no)
        {
            return 1;
        }
        else if(root->data>no)
        {
            return search(root->right,no);
        }
        else if(root->data<no){
            return search(root->left,no);
        }
    }
}


