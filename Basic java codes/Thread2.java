class MyThread implements Runnable
{
	public void run()
	{
		System.out.println("\n\tI am Running\n\n");
	}
	public void start()
	{
		System.out.println("\n\tI Start\n\n");
	}
	public void stop()
	{
		System.out.println("\n\tI Stop\n\n");
	}
	public void sleep()
	{
		System.out.println("\n\tI am Sleeping\n\n");
	}
}

class Thread2
{
	public static void main(String [] s)
	{
		MyThread obj=new MyThread();
		Thread t=new Thread(obj);
		//t.run();	
		t.start();
		//t.stop();
		//t.sleep();
		try
		{
			t.sleep(1000);
		}
		catch(Exception e)
		{
		}
	}
}