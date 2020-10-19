class Myexception extends Exception 
{
	public String toString()
	{
		return("\n\tExcptn 1# override system defined exception:)\n");
	}
	public String getmessage()
	{
		return("\n\tExcptn 2# USER DEFINED EXCEPTION:)\n");
	}
}

public class Excptntest3a
{
	int no1,no2;
	public Excptntest3a(int n1,int n2)
	{
		no1=n1;
		no2=n2;
	}
	public void testfunction() throws Myexception
	{
		int res;
		if(no2==0)
		
			throw new Myexception();
		else
		{
			res=no1/no2;
			System.out.println("\n\tResult of "+no1+" / "+no2+" = "+res);
		}
	}
	public static void main(String [] s)
	{
		Excptntest3a obj=new Excptntest3a(25,0);
		try
		{
			obj.testfunction();
		}
		catch(Myexception e)
		{
			System.out.println(e);
			System.out.println(e.getmessage());
		}
	}
}