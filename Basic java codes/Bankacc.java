class Bankacc
{
 String name;
 float ammount;
 public void setvalue(String nm,float amm)
 {
  name=nm;
  ammount=amm;
 }
 public void getvalue()
 {
  System.out.println("Name is-"+name);
  System.out.println("The ammount is-"+ammount);
 }
 public static void main(String[] args)
 {
  Bankacc obj1=new Bankacc();
  Bankacc obj2=new Bankacc();
  obj1.setvalue("Ajay das",1000);
  obj2.setvalue("Binay das",4000);
  obj1.getvalue();
  obj2.getvalue();
 }
}