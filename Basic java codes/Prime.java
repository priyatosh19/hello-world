class Prime
{
 public static void main(String[] s)
 {
  int n=14,i,flag=1;
  for(i=2;i<=n/2;i++)
  {
   if(n%i==0)
   {
    flag=1;
    break;
   }
   else
   flag=0;
  }
 if(flag==1)
 System.out.println("number is not prime");
 else
 System.out.println("number is prime");
 }
}