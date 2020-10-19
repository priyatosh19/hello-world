#include<stdio.h>

int main()
{
    int n,hcf=1,i,j=1,arr[100],min,flag;
    printf("Enter for how many numbers you want to calculate HCF(<100)- ");
    scanf("%d",&n);
    printf("Enter the numbers by giving space- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    while(j<=min)
    {
        flag=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]%j!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            hcf=j;
        j++;
    }
    printf("The HCF of this %d number is %d",n,hcf);
}
