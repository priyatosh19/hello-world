public class Excptntest2
{
	public static void main(String [] s)
	{
		for(int i=0;i<4;i++)
		{
			int k;
			try
			{
				switch(i)
				{
					case 0:
						int z=0;
						k=123/z;
						break;
					case 1:
						int a[]=null;
						k=a[0];
						break;
					case 2:
						int arr[]=new int[2];
						k=arr[5];
						break;
					case 3:
						char ch="abc".charAt(5);
						break;
				}
			}
			catch(Exception e)
			{
				System.out.println("\n Test case #"+ i +"\n");
				System.out.println("\t"+ e +"\n");
			}
		}
	}
}