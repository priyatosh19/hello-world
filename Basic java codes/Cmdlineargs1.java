class Cmdlineargs1
{
	public static void main(String [] s)
	{
		int a,b,sum=0;
		System.out.println("\n\tSum of"+s[0]+" and "+s[1]+" = "+(s[0]+s[1]));
		a=Integer.parseInt(s[0]);
		b=Integer.parseInt(s[1]);
		sum=a+b;
		System.out.println("\n\tSum of "+a+" and "+b+" = "+sum);
		System.out.println("\n\tSum of "+s[0]+" and "+s[1]+" = "+((Integer.parseInt(s[0]))+(Integer.parseInt(s[1]))));
	}
}