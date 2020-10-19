#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],flag=0,temp;
    int n;
    printf("Enter the string: ");
    gets(str);
    n=strlen(str);

    for(int i=0;i<n/2;i++)
    {
        temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;
    }
    printf("The reverse string is: ");
    puts(str);
}
