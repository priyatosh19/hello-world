import java.lang.Thread;

class Child1 extends Thread
{
	public void run()
	{
		for(int i=1;i<15;i++)
		System.out.println("Child 1 :"+i);
	}
}
class Child2 extends Thread
{
	public void run()
	{
		for(int i=1;i<15;i++)
		System.out.println("Child 2 :"+i);
	}
}
class Child3 extends Thread
{
	public void run()
	{
		for(int i=1;i<15;i++)
		System.out.println("Child 3 :"+i);
	}
}

class Threadtest
{
	public static void main(String [] s)
	{
		Child1 c1=new Child1();
		Child2 c2=new Child2();
		Child3 c3=new Child3();
		c1.setPriority(Thread.MIN_PRIORITY);
		c2.setPriority(Thread.MAX_PRIORITY);
		c3.setPriority(Thread.NORM_PRIORITY);
		c1.start();
		c2.start();
		c3.start();
	}
}
