abstract class Employee
{
	String name,dept,id,dsgn;
	int bas,da,hra;
	float sal;
	abstract void salcalculate();
	void getdetails()
	{
		System.out.println("\n\n\t\t:: Employee Details ::");
		System.out.println("\n\n\tName: "+name);
		System.out.println("\n\tEmployee ID: "+id);
		System.out.println("\n\tDepartment: "+dept);
		System.out.println("\n\tDesignation: "+dsgn);
		System.out.println("\n\tBasic: "+bas);
		System.out.println("\n\tD.A: "+da);
		System.out.println("\n\tH.R.A: "+hra);
		System.out.println("\n\tTotal Salary: "+sal+"\n\n");
	}
}

class Manager extends Employee
{
	int med;
	public Manager(String n,String i,String d,String dsg,int b)
	{
		name=n;
		id=i;
		dept=d;
		dsgn=dsg;
		bas=b;
	}
	void salcalculate()
	{
		da=(bas*30)/100;
		hra=(bas*15)/100;
		med=300;
		sal=bas+da+hra+med;
		super.getdetails();
	}
}

class Clerk extends Employee
{
	public Clerk(String n,String i,String d,String dsg,int b)
	{
		name=n;
		id=i;
		dept=d;
		dsgn=dsg;
		bas=b;
	}
	void salcalculate()
	{
		da=(bas*20)/100;
		hra=(bas*10)/100;
		sal=bas+da+hra;
		super.getdetails();
	}
}

public class Emptype
{
	public static void main(String [] s)
	{
		Manager e1=new Manager("STEVE JOBS","ADM/SP/012","Admin","HR Manager",5000);
		e1.salcalculate();

		Clerk e2=new Clerk("MARK JUKARBARK","CLRK/SP/031","Account","Head Clerk",5000);
		e2.salcalculate();
	}
}
