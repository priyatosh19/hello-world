#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node *head=NULL;

void display()
{
    struct Node *ptr=head;
    printf("The List is-\n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

void beg_insert(int val)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node *));
    if(ptr==NULL)
    {
        printf("\nExit");
    }
    else
    {
        ptr->data=val;
        ptr->next=head;
        head=ptr;
        printf("Element Inserted\n");
    }
}

void end_insert(int val)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node *));
    struct Node *temp=head;

    if(ptr==NULL)
    {
        printf("\nExit");
    }
    else
    {
        ptr->data=val;
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
        }
        else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;}
        printf("Element Inserted\n");
    }
}

void between_insert(int pos,int val)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node *));
    struct Node *temp=head;

    int count=1;
    if(ptr==NULL)
    {
        printf("\nExit");
    }
    else
    {
        ptr->data=val;
        ptr->next=NULL;
        if(pos==1)
        {
            ptr->data=val;
            ptr->next=head;
            head=ptr;
        }
        else{
        while((count!= pos-1) && temp->next!=NULL)
        {
            temp=temp->next;
            count+=1;
        }
        if(count==pos-1)
        {ptr->next=temp->next;
        temp->next=ptr;
        printf("Element Inserted\n");}
        else
            printf("couldn't insert\n");
        }
    }
}

void beg_delete()
{
    struct Node *temp=head;
    int val=head->data;
    head=temp->next;
    free(temp);
    printf("Deleted item is-%d\n",val);
}

void end_delete()
{
    struct Node *temp=head,*ptr;
    int val;
    if(head->next==NULL)
    {
        head=NULL;
        val=temp->data;
    }
    else
    {
        ptr=head->next;
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        val=ptr->data;
    }
    free(ptr);
    printf("Deleted item is-%d\n",val);
}

void between_delete(int pos)
{
    struct Node *temp=head,*ptr;
    int val,count=1;
    if(pos==1)
    {
        val=head->data;
        head=temp->next;
        free(temp);
        printf("Deleted item is-%d\n",val);
    }
    else
    {
        ptr=head->next;
        while((count!= pos-1) && ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
            count+=1;
        }
        if(count==pos-1)
        {
            val=ptr->data;
            temp->next=ptr->next;
            ptr->next=NULL;
            free(ptr);
            printf("Deleted item is-%d\n",val);
        }
        else
        {
            printf("out of list");
        }
    }
}

void main()
{
    int val,in2,in4,pos;
    char in1='x',in3='x';
    printf("Enter some element\n");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&val);
        end_insert(val);
    }

    printf("Do you want to insert more data then press 1 else press x-");
    scanf("%s",&in1);

    while(in1!='x'){
    printf("Enter the list element- ");
    scanf("%d",&val);
    printf("Where do you want to insert\n1. for at beg\n2. for at end\n3. for in between\n");
    scanf("%d",&in2);
        if(in2==1)
            beg_insert(val);
        else if(in2==2)
            end_insert(val);
        else
        {
            printf("Enter position-");
            scanf("%d",&pos);
            between_insert(pos,val);
        }
    printf("Do you want to insert more data then press 1 else press x-");
    scanf("%s",&in1);
    }

    display();

    printf("Do you want to delete element then type 1 else press x-");
    scanf("%s",&in3);
    while(in3!='x')
    {
        printf("Where do you want to delete data\n1. at beg\n2. at end\n3. in between\n");
        scanf("%d",&in4);
            if(in4==1)
                beg_delete();
            else if(in4==2)
                end_delete();
            else
            {
                printf("Enter position-");
                scanf("%d",&pos);
                between_delete(pos);
            }
        printf("Do you want to delete more data then press 1 else press x-");
        scanf("%s",&in3);
    }
    display();
}
