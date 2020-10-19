class Shape
{
 String name;
 double area;

 void getarea(int r,String nm)
 {
  name=nm;
  area=3.14*r*r;
  disparea();
 }
 void getarea(int w,int b,String nm)
 {
  name=nm;
  area=w*b;
  disparea();
 }
 void getarea(float s,String nm)
 {
  name=nm;
  area=s*s;
  disparea();
 }

 void disparea()
{
 System.out.println("\tThe area of "+name+" = "+area);
}
}

public class Polymorph2
{
 public static void main(String[] args)
 {
  Shape o1=new Shape();
  Shape o2=new Shape();
  Shape o3=new Shape();
 
  o1.getarea(4,7,"RECTANGLE");
  o2.getarea(4.5f,"SQUARE");
  o3.getarea(7,"CIRCLE");
 }
}