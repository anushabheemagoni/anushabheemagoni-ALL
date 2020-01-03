#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* newnode(int e)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=e;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void inorder(struct node* node)
{
    if(node==NULL)
    {
        return;
    }
    inorder(node->left);
    printf("%d",node->data);
    inorder(node->right);
}
void postorder(struct node* node)
{
    if(node==NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    printf("%d",node->data);
}
void preorder(struct node* node)
{
    if(node==NULL)
        return;
    printf("%d",node->data);
    preorder(node->left);
    preorder(node->right);
}
int main()
{
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    inorder(root);
    postorder(root);
    preorder(root);
}
