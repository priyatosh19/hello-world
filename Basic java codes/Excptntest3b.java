import java.io.*;

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

public class Excptntest3b
{
	int no1,no2;
	public Excptntest3b(int n1,int n2)
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
	public static void main(String [] s) throws IOException
	{
		int a,b;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.print("\n\tEnter the 1st number:");
		a=Integer.parseInt(br.readLine());
		System.out.print("\n\tEnter the 2nd number:");
		b=Integer.parseInt(br.readLine());
		
		Excptntest3b obj=new Excptntest3b(a,b);

		try
		{
			obj.testfunction();
		}
		catch(Myexception e)
		{
			System.out.println(e);
			System.out.println(e.toString());
			System.out.println(e.getmessage());
		}
	}
}