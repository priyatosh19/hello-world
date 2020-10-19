class Concat
{
 String s;
 float f;
 
 public void addvalue(String s1,String s2)
 {
  s=s1+s2;
  System.out.println("The addition of("+s1+" & "+s2+") the result is=" +s);
 }
 public void addvalue(float f1,float f2)
 {
  f=f1+f2;
  System.out.println("The addition of("+f1+" & "+f2+") the result is="+f);
 }
}

public class Polymorph1
{
 public static void main(String [] args)
  {
   Concat o1=new Concat();
   Concat o2=new Concat();
   
   o1.addvalue(35.50f,25.50f);
   o1.addvalue("Don ","Bradman");
  }
}
  