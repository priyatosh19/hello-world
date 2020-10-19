public class Bankacc1
{
 String name;
 float amount;
public void setvalue(String nm,float amt)
{
 name=nm;
 amount=amt;
}
public void setvalue(float amnt)
{
 amount=amnt;
}
public void setvalue(String nm)
{
 name=nm;
}
public void getvalue()
{
 System.out.println("the name of the account holder is-"+name);
 System.out.println("the amount is-"+amount);
}
public static void main(String[] s)
{
 Bankacc1 o1=new Bankacc1();
 Bankacc1 o2=new Bankacc1();
 Bankacc1 o3=new Bankacc1();

 o1.setvalue("Ms Dhoni",5000);
 o2.setvalue("virat kohli");
 o3.setvalue(3000);

 o1.getvalue();
 o2.getvalue();
 o3.getvalue();
}
}