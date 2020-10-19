#include<stdio.h>

int subtract(int x, int y)
{
    // Iterate till there
    // is no carry
    while (y != 0)
    {
        // borrow contains common
        // set bits of y and unset
        // bits of x
        int borrow = (~x) & y;

        // Subtraction of bits of x
        // and y where at least one
        // of the bits is not set
        x = x ^ y;

        // Borrow is shifted by one
        // so that subtracting it from
        // x gives the required sum
        y = borrow << 1;
    }
    return x;
}

// Driver Code
int main()
{
    int n1,n2;
    printf("Enter two number:-");
    scanf("%d %d",&n1,&n2);
    printf("The subtraction is- %d", subtract(n1,n2));
    return 0;
}
