#include<stdio.h>

int main()
{
    int arr[100],freq[100],n,min,max=0,count=0;
    printf("How many elements(Integer) you want to enter:-");
    scanf("%d",&n);
    printf("Enter the elements-");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    printf("The entered elements are- ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    printf("\nThe minimum element is %d\nThe maximum element is %d\n",min,max);

    for(int i=0;i<n;i++)
    {
        count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                {count++;
                freq[j]=0;}
        }
        if(freq[i]!=0)
            freq[i]=count;
    }
    printf("Frequencies of elements-\n");
    for(int i=0;i<n;i++)
    {
        if(freq[i]!=0)
        printf("%d= %d\n",arr[i],freq[i]);
    }
}
