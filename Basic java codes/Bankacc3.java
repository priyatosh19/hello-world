public class Bankacc3
{
 String name;
 float amount;

 public Bankacc3()
 {
   name="";
   amount=0.0f;
   System.out.println("called 1st constructor");
 }
 public Bankacc3(String nm)
 {
   name=nm;
   System.out.println("called 2nd constructor");
 }
 public Bankacc3(float amt)
 {
   amount=amt;
   System.out.println("called 3rd constructor");
 }
 public Bankacc3(String nm,float amnt)
 {
   name=nm;
   amount=amnt;
   System.out.println("called 4th constructor");
 }
 public void getvalue()
 {
   System.out.println("The name is-"+name);
   System.out.println("The amount is-"+amount);
 }
 
 public static void main(String [] args)
 {
   Bankacc3 o1=new Bankacc3();
   o1.getvalue();
   Bankacc3 o2=new Bankacc3("Rahul Dravid");
   o2.getvalue();
   Bankacc3 o3=new Bankacc3(5000);
   o3.getvalue();
   Bankacc3 o4=new Bankacc3("kapil Dev",3000.50f);
   o4.getvalue();
 }
}