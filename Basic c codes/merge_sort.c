#include<stdio.h>
#include<stdlib.h>

void merge(int *ptr,int f,int l,int m)
{
    int i,j,k;
    int n1=m-f+1;
    int n2=l-m;
    int L[n1],R[n2];

    for(i=0;i<n1;i++)
    {
        L[i]=ptr[f+i];
    }
    for(i=0;i<n2;i++)
    {
        R[i]=ptr[m+1+i];
    }

    i=0;
    j=0;
    k=f;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            ptr[k] = L[i];
            i++;
        }
        else {
            ptr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        ptr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        ptr[k]=R[j];
        j++;
        k++;
    }

}
void merge_sort(int *ptr,int first,int last)
{
    int mid;
    if(first<last)
    {
        mid=first+(last-first)/2;

        merge_sort(ptr,first,mid);
        merge_sort(ptr,mid+1,last);

        merge(ptr,first,last,mid);
    }
}

int main()
{
    int *ptr,n,i;
    printf("how many element you want to enter-");
    scanf("%d",&n);
    ptr=(int *)malloc(sizeof(int)*n);
    printf("Enter the element-");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }

    merge_sort(ptr,0,n-1);
    printf("After sorting the element- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}

