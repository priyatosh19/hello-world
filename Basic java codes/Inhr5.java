class Person
{
	String name,add;
	float age;
	public Person(String n,float ag,String ad)
	{
		name=n;
		age=ag;
		add=ad;
	}
	public void getdata()
	{
		System.out.println("\n\tName:"+name+"\n\tAge:"+age+"\n\tAddress:"+add);
	}
}

class Employee extends Person
{
	String id,designation,type;
	float salary;
	public Employee(String nm,float ag,String adr,String i,String desn,String typ,float sal)
	{
		super(nm,ag,adr);
		id=i;
		designation=desn;
		type=typ;
		salary=sal;
	}
	
	public void getdata()
	{
		super.getdata();
		System.out.println("\n\tId:"+id+"\n\tDesignation:"+designation+"\n\tType:"+type+"\n\tSalary:"+salary);
	}
}

class Manager extends Employee
{
	String mngrcode,region;
	public Manager(String nm,float ag,String adr,String i,String desn,String typ,float sal,String mgcd,String regn)
	{
		super(nm,ag,adr,i,desn,typ,sal);
		mngrcode=mgcd;
		region=regn;
	}

	public void getdata()
	{
		super.getdata();
		System.out.println("\n\tManagercode:"+mngrcode+"\n\tRegion:"+region);
	}
}

class Inhr5
{
	public static void main(String [] s)
	{
		Manager m1=new Manager("Mukash Ambani",30.5f,"kolkata","ORG/0123","Regional Manager","Permanent",50000.0f,"MGR-01","EAST ZONE");
		System.out.println("\n\n\t\t------# DETAILS OF MANAGER(m1) #------");
		m1.getdata();
	}
}