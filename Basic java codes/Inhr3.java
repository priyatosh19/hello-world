interface Flying
{
	int i=10;
	void fly();
}

class Bird implements Flying
{
	public void fly()
	{
		System.out.println("In Birds.");
	}
}

class Plane implements Flying
{
	public void fly()
	{
		System.out.println("In Plane.");
	}
}

class Inhr3
{
	public static void main(String [] s)
	{
		Bird b=new Bird();
		System.out.println(b.i);
		b.fly();
	
		Plane p=new Plane();
		System.out.println(p.i);
		p.fly();

		Flying f1=new Bird();
		System.out.println(f1.i);
		f1.fly();

		Flying f2=new Bird();
		System.out.println(f2.i);
		f2.fly();

		System.out.println("Using Interface Name:"+Flying.i);
	}
}