#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],flag=0;
    int n;
    printf("Enter the string: ");
    gets(str);
    n=strlen(str);

    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("String is palindrome");
    else
        printf("String is not palindrome");
}
