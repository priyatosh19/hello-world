class Base1
{
	int base_data;
	public Base1()
	{
		System.out.println("\n Base class null constructor invoked.\n");
		base_data=10;
	}
	public Base1(int a)
	{
		System.out.println("\n Base class pramitarized constructor invoked");
		base_data=a;
	}
	public void setvalue(int b)
	{
		base_data+=b;
	}
	public void getvalue()
	{
		System.out.println("\n\t\tBase_data="+base_data);
	}
}

class Child1 extends Base1
{
	int child_data;
	public Child1()
	{
		System.out.println("\n Child class null constructor invoked\n");
		child_data=20;
	}
	public Child1(int a)
	{
		System.out.println("\n Child class Paramitarized(1) constructor invoked");
		base_data=a;
		child_data=a;
	}
	public Child1(int a,int b)
	{
		super(a);
		System.out.println("\n Child class paramitarized(2) constructor invoked");
		child_data=b;
	}
	public void setvalue(int c)
	{
		super.setvalue(c);
		child_data+=c;
	}
	public void getdata()
	{
		System.out.println("\n\t\tChild_data="+child_data);
	}
}

public class Inhr1b
{
	public static void main(String [] s)
	{
		Child1 obj1=new Child1();
		System.out.println("\n\nAfter creatiion & initiaton of object(1) the data are::");
		obj1.getvalue();
		obj1.getdata();
		
		obj1.setvalue(10);
		System.out.println("\n\n\tAfter adding 10 the data are::");
		obj1.getvalue();
		obj1.getdata();

		Child1 obj2=new Child1();
		System.out.println("\n\nAfter creatiion & initiaton of object(2) the data are::");
		obj2.getvalue();
		obj2.getdata();

		obj2.setvalue(10);
		System.out.println("\n\n\tAfter adding 10 the data are::");
		obj2.getvalue();
		obj2.getdata();
	}
}