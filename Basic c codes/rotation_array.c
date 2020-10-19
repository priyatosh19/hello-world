#include<stdio.h>
#include<stdlib.h>

int left_rot(int *arr,int n)
{
    int l,i,t;
    printf("How many times left rotation:-");
    scanf("%d",&l);
    while(l!=0)
    {
        t=*(arr+0);
        for(i=0;i<n-1;i++)
        {
            *(arr+i)=*(arr+i+1);
        }
        *(arr+i)=t;
        l-=1;
    }

}

int right_rot(int *arr,int n)
{
    int l,i,t;
    printf("How many times right rotation:-");
    scanf("%d",&l);
    while(l!=0)
    {
        t=*(arr+n-1);
        for(i=n-1;i>0;i--)
        {
            *(arr+i)=*(arr+i-1);
        }
        *(arr+i)=t;
        l-=1;
    }

}

int main()
{
    int *arr,n,temp,i,r,ch;
    printf("How many elements you want to enter?\n");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    if(arr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter the values- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    printf("Enter which rotation 1.Left and 2.Right- ");
    scanf("%d",&ch);
    if(ch==1)
        left_rot(arr,n);
    else
        right_rot(arr,n);

    printf("The rotated array is- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
}
