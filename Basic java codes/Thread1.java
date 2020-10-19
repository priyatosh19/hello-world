class Thread1
{
	public static void main(String [] s)
	{
		Thread t=Thread.currentThread();
		System.out.println("\n\tThread Name: "+t.getName());
		System.out.println("\n\tThread Priority: "+t.getPriority()+"\n\n");
		try
		{
			t.setName("Thread.Alex");
			t.setPriority(Thread.MAX_PRIORITY);
			System.out.println("\n\tThread Name: "+t.getName());
			System.out.println("\n\tThread Priority: "+t.getPriority()+"\n\n");
			Thread.sleep(1000);
		}
		catch(Exception e)
		{
		}
	}
}