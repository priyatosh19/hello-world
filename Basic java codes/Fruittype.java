abstract class Fruit
{
	String clr,shp;
	abstract void getdetails();
}

class Mango extends Fruit
{
	public Mango(String c,String s)
	{
		clr=c;
		shp=s;
	}
	void getdetails()
	{
		System.out.println("\n\n\t\t:: Class Mango ::");
		System.out.println("\n\n\tColor: "+clr);
		System.out.println("\n\n\tShape: "+shp+"\n\n");
	}
}

class Apple extends Fruit
{
	String typ;
	public Apple(String c,String s)
	{
		clr=c;
		shp=s;
		typ="UNKNOWN";
	}
	public Apple(String c,String s,String t)
	{
		clr=c;
		shp=s;
		typ=t;
	}
	void getdetails()
	{
		System.out.println("\n\n\t\t:: Class Mango ::");
		System.out.println("\n\n\tColor: "+clr);
		System.out.println("\n\n\tShape: "+shp);
		System.out.println("\n\n\tType: "+typ+"\n\n");
	}
}

public class Fruittype
{
	public static void main(String s [])
	{
		Mango m1=new Mango("Green","Round");
		m1.getdetails();
		Mango m2=new Mango("Red","Rectangular");
		m2.getdetails();

		Apple a1=new Apple("Green","Round");
		a1.getdetails();
	}
}