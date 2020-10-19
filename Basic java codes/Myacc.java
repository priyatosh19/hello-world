import java.io.*;

class Bankacc4
{
	String name;
	float ammount;
	int accid;
	public Bankacc4(String nm,float amm,int acid)
	{
		name=nm;
		ammount=amm;
		accid=acid;
	}
	public void display()
	{
		System.out.println("\n-------------------------------------------------");
		System.out.println("Name is-"+name);
		System.out.println("The ammount is-"+ammount);
		System.out.println("The account id is-"+accid);
		System.out.println("\n-------------------------------------------------");
	}
}

public class Myacc
{
	public static void main(String [] s) throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int noofacc=0;
		
		String nm;
		int ac;
		float amt;
		
		Bankacc4 cust[];
		
		System.out.println("\nEnter how many accounts u want to creat? ");
		noofacc=Integer.parseInt(br.readLine());
		
		cust=new Bankacc4[noofacc];

		for(int i=0;i<noofacc;i++)
		{
			System.out.println("\n\n\tCreat acc of person no-"+(i+1));
			System.out.println("\n\n Enter the name of the person: ");
			nm=br.readLine();

			System.out.println("\n\n Enter the account no of the person: ");
			ac=Integer.parseInt(br.readLine());

			System.out.println("\n\n Enter the opening ammount of the person: ");
			amt=Float.parseFloat(br.readLine());

			cust[i]=new Bankacc4(nm,amt,ac);
		}
		System.out.println("\n\t------# DETAILS OF ACCOUNTS #------");
		System.out.println("\n-------------------------------------------------------");
		for(int i=0;i<noofacc;i++)
		{
			System.out.println("\n\tAccount details of person "+(i+1));
			cust[i].display();
		}
	}
}