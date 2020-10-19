#include<stdio.h>

int main()
{
    int n1,n2,d1,d2,x,y,gcd_no,c;
    printf("Enter numerator of first fraction- ");
    scanf("%d",&n1);
    printf("\nEnter denominator of first fraction- ");
    scanf("%d",&d1);
    printf("\nEnter numerator of second fraction- ");
    scanf("%d",&n2);
    printf("\nEnter denominator of second fraction- ");
    scanf("%d",&d2);

    x=(n1*d2)+(d1*n2);

    y=d1*d2;

   for(c=1; c <= x && c <= y; ++c)
   {
       if(x%c==0 && y%c==0)
          gcd_no = c;
   }

    printf("\nThe added fraction is %d/%d ",x/gcd_no,y/gcd_no);
    printf("\n");
    return 0;
}
