class MyThread extends Thread
{
	public void run()
	{
		System.out.println("\n\tChild Thread Started\n");
		try
		{
			for(int c=0;c<3;c++)
			{
				System.out.println("\n\t"+Thread.currentThread().getName()+" - "+c);
				Thread.sleep(1000);
			}
		}
		catch(Exception e)
		{
		}
	}
}
class Threadtest3
{
	public static void main(String [] s)
	{
		System.out.println("\n\tMain Thread Started\n");
		MyThread t1=new MyThread();
		t1.setName("Child-1");
		t1.start();

		MyThread t2=new MyThread();
		t2.setName("Child-2");
		t2.start();
		try
		{
			for(int c=100;c<105;c++)
			{
				System.out.println("\n\t"+Thread.currentThread().getName()+" - "+c);
				Thread.sleep(1000);
			}
		}
		catch(Exception e)
		{
		}
	}
}