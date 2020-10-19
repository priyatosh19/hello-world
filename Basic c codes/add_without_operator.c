
#include<stdio.h>

int Add(int x, int y)
{
    // Iterate till there is no carry
    while (y != 0)
    {
        // carry now contains common
        //set bits of x and y
        int carry = x & y;

        // Sum of bits of x and y where at
        //least one of the bits is not set
        x = x ^ y;

        // Carry is shifted by one so that adding
        // it to x gives the required sum
        y = carry << 1;
    }
    return x;
}

int main()
{
    int n1,n2;
    printf("Enter two number:-");
    scanf("%d %d",&n1,&n2);
    printf("The addition is-%d", Add(n1,n2));
    return 0;
}
