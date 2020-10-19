class Cmdlineargs
{
	public static void main(String [] args)
	{
		System.out.println("\n\n Total "+args.length+" Numbers of commanndline arguments are given");
		System.out.println("\n\n The arguments are :");
		for(int k=0;k<args.length;k++)
		{
			System.out.println("\n Argument "+(k+1)+" ="+args[k]+"\n");
		}
	}
}