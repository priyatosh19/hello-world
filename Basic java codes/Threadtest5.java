class MyThread implements Runnable
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
class Threadtest5
{
	public static void main(String [] s)
	{
		System.out.println("\n\tMain Thread Started\n");
		MyThread obj=new MyThread();
		Thread t1=new Thread(obj);
		t1.start();
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
		System.out.println("\n\t Priority of Main Thread: "+Thread.currentThread().getPriority());
		System.out.println("\n\t Priority of Child Thread: "+t1.getPriority());
	}
}