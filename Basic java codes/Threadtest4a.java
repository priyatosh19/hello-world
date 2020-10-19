class MyThread extends Thread
{
	public void run()
	{
		//System.out.println("\n\t[Child]-"+Thread.currentThread().getName());
		
		for(int c=0;c<10;c++)
		{
			System.out.println("\n\t"+Thread.currentThread().getName()+" - "+c);
		}
	}
}
class MyThread1 extends Thread
{
	public void run()
	{
		//System.out.println("\n\t[Child]-"+Thread.currentThread().getName());
		
		for(int c=0;c<10;c++)
		{
			System.out.println("\n\t"+Thread.currentThread().getName()+" - "+c);
		}
	}
}
class MyThread2 extends Thread
{
	public void run()
	{
		//System.out.println("\n\t[Child]-"+Thread.currentThread().getName());
		
		for(int c=0;c<10;c++)
		{
			System.out.println("\n\t"+Thread.currentThread().getName()+" - "+c);
		}
	}
}
class Threadtest4a
{
	public static void main(String [] s)
	{
		System.out.println("\n\t[Main]-"+Thread.currentThread().getName());

		MyThread t1=new MyThread();
		t1.setName("Child-1");
		t1.setPriority(Thread.MIN_PRIORITY);

		MyThread1 t2=new MyThread1();
		t2.setName("Child-2");
		t2.setPriority(Thread.NORM_PRIORITY);

		MyThread2 t3=new MyThread2();
		t3.setName("Child-3");
		t3.setPriority(Thread.MAX_PRIORITY);

		t1.start();
		t2.start();
		t3.start();

		System.out.println("\n\t Priority of Main Thread: "+Thread.currentThread().getPriority());
		System.out.println("\n\t Priority of Child Thread: "+t1.getPriority());
		System.out.println("\n\t Priority of Child Thread: "+t2.getPriority());
	}
}