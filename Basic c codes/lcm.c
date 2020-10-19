#include<stdio.h>

int main()
{
    int n,lcm=1,i,arr[100],max=0,flag,mul=1;
    printf("Enter for how many numbers you want to calculate LCM(<100)- ");
    scanf("%d",&n);
    printf("Enter the numbers by giving space- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        mul*=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    while(max<=mul)
    {
        flag=0;
        for(i=0;i<n;i++)
        {
            if(max%arr[i]!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    printf("The LCM of this %d number is %d",n,lcm);
}
