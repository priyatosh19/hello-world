interface Shape
{
	double getarea();
}

class Rectangle implements Shape
{
	double h,w;
	Rectangle(double a,double b)
	{
		h=a;
		w=b;
	}
	public double getarea()
	{
		return h*w;
	}
}

class Circle implements Shape
{
	double r;
	Circle(double c)
	{
		r=c;
	}
	public double getarea()
	{
		return 3.14*r*r;
	}
}

class Inhr4
{
	public static void main(String [] s)
	{
		Rectangle rect=new Rectangle(10,20);
		double d=rect.getarea();
		System.out.println("\nArea of Rectangle="+d);

		Circle cir=new Circle(10);
		d=cir.getarea();
		System.out.println("\nArea of circle="+d);

		Shape s1=new Rectangle(20,30);
		d=s1.getarea();
		System.out.println("\nArea of Rectangle="+d);

		Shape s2=new Circle(5);
		d=s2.getarea();
		System.out.println("\nArea of circle="+d);
	}
}