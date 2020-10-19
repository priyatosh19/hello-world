#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],flag=0,temp;
    int n;
    int freq[256]={0};
    printf("Enter the string: ");
    gets(str);


    for(int i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }

    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
        printf("Frequencies are- %c = %d\n",i,freq[i]);
    }
}
