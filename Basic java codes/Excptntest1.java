class Excptntest1
{
	public static void main(String [] s)
	{
		int j=0,i=0;
		System.out.println("\n\n The arguments are :");
		for(int k=0;k<s.length;k++)
		{
			System.out.println("\n Argument "+(k+1)+" ="+s[k]+"\n");
		}
		try
		{
			i=Integer.parseInt(s[0]);
			j=Integer.parseInt(s[1]);
		}
		catch(Exception e)
		{
			System.out.println("\n First Exception: Enetr two number(Numeric value)\n");
			System.out.println("\n\t Error Description: "+e);
		}
		
		try
		{
			j=i/j;
			System.out.println("\n Divsion Result ="+j+"\n\n");
		}
		catch(Exception a)
		{
			System.out.println("\n Second exception : Enter a non zero value for divisor\n");
			System.out.println("\n\tError description :"+a);
		}
	}
}
	