class Base1
{
	int base_data;
	public Base1()
	{
		System.out.println("\n Base class constructor invoked.\n");
		base_data=10;
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
		System.out.println("\n Child class constructor invoked\n");
		child_data=20;
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

public class Inhr1
{
	public static void main(String [] s)
	{
		Child1 obj=new Child1();
		System.out.println("\n\nAfter creatiion & initiaton of object the data are::");
		obj.getvalue();
		obj.getdata();
		
		obj.setvalue(5);
		System.out.println("\n\n\tAfter adding 5 the data are::");
		obj.getvalue();
		obj.getdata();

		obj.setvalue(10);
		System.out.println("\n\n\tAfter adding 10 the data are::");
		obj.getvalue();
		obj.getdata();
	}
}