public class Bankacc2
{
 String name;
 float amount;
public void deposit(float amt)
{
 System.out.println("\nThe previous bank balence is- "+amount);
 System.out.println("The deposit amount is-"+amt);
 
 amount=amount+amt;
 System.out.println("\nThe new balence is-"+amount);
}

public void withdrawl(float amnt)
{
 float wt;
 System.out.println("\nThe previous bank balence is- "+amount);
 System.out.println("The withdrawl amount is-"+amnt);

 wt=amount-amnt;
 
 if(amount<amnt)
 System.out.println("\n!!!oops!! you have insufficient balence\n");
 else
 {
  if(wt<1000)
  System.out.println("\nThe balence should be at least 1000\n");
  else
  {
   amount=wt;
   System.out.println("\nThe balence is-"+amount);
  }
}
}
public void setvalue(String nm,float amt)
{
 name=nm;
 amount=amt;
}
public void getvalue()
{
 System.out.println("\nThe name of the account holder is "+name);
 System.out.println("The amount is-"+amount);
}

public static void main(String[] s)
{
 Bankacc2 o1=new Bankacc2();
 
 o1.setvalue("Sachin Tendulker",4000);
 o1.getvalue();

 o1.deposit(2000);
 o1.withdrawl(3000);
 o1.withdrawl(5000);
}
}