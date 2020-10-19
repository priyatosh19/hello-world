#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node * newnode(int item)
{
    struct node * temp=(struct node *)malloc(sizeof(struct node));
    temp->data=item;
    temp->left=temp->right=NULL;
    return temp;
}

void postorder(struct node * root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void preorder(struct node * root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node * root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

struct node * insert(struct node * node,int data)
{
    if(node==NULL) return newnode(data);

    if(data<node->data)
        node->left=insert(node->left,data);
    else if(data>node->data)
        node->right=insert(node->right,data);

    return node;
}

int main()
{
    int n,val;
    struct node * root=NULL;
    printf("how many data you want to enter initially\n");
    scanf("%d",&n);
    printf("Enter the data-");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        if(i==0)
            root=insert(root,val);
        else
            insert(root,val);
    }

    int choice=0;
    while(choice!=4){
    printf("1.preorder\n2.postorder\n3.inorder\n4.Exit\nEnter your choice\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("The preorder is-\n");
            preorder(root);
            break;
        case 2:
            printf("The postorder is-\n");
            postorder(root);
            break;
        case 3:
            printf("The inorder is-\n");
            inorder(root);
            break;
        case 4:
            exit(1);
        default:
            printf("Enter correct choice\n");
    }}
    return 0;
}
