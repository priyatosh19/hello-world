class Person
{
	String name;
	float age;
	public Person()
	{
		name="";
		age=0f;
	}
	public void setvalue(String nm,float ag)
	{
		name=nm;
		age=ag;
	}
	public void getdata()
	{
		System.out.println("\n\nName:"+name+"\nAge:"+age);
	}
}

class Student extends Person
{
	int roll;
	String class_name;
	public Student()
	{
		roll=0;
		class_name="";
	}
	public void setvalue(String n,float a,int r,String c)
	{
		super.setvalue(n,a);
		roll=r;
		class_name=c;
	}
	public void setvalue(int r,String c)
	{
		roll=r;
		class_name=c;
	}
	public void setvalue(float a)
	{
		age+=a;
	}
	public void getdata()
	{
		super.getdata();
		System.out.println("\nRoll No:"+roll+"\nClass:"+class_name);
	}
}

public class Inhr2
{
	public static void main(String [] s)
	{
		Student obj1=new Student();
		obj1.getdata();

		obj1.setvalue("Alan Wake",20.5f,15,"CSE");
		obj1.getdata();
	
		obj1.setvalue(23,"IT");
		obj1.getdata();

		obj1.setvalue(0.5f);
		obj1.getdata();
	}
}
