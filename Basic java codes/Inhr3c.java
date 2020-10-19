interface Student
{
	int roll=13;
	String name="Tony Stark";
	void getdetails();
}

class Marks implements Student
{
	int sub1,sub2,sub3;
	float totalmarks,percntg;
	public Marks(int s1,int s2,int s3)
	{
		sub1=s1;
		sub2=s2;
		sub3=s3;
		totalmarks=sub1+sub2+sub3;
		percntg=totalmarks/3;
	}
	
	public void studentdetails()
	{
		System.out.println("\n\t\t----# STUDENT DETAILS #----");
		System.out.println("\n\tStudent's Roll:"+roll);
		System.out.println("\n\tStudent's Name:"+name);
	}
	
	public void marksdetails()
	{
		System.out.println("\n\t\t----# MARKS DETAILS #----");
		System.out.println("\n\tMark of subject1:"+sub1);
		System.out.println("\nMark of subject2:"+sub2);
		System.out.println("\nMark of subject3:"+sub3);
	}

	public void getdetails()
	{
		studentdetails();
		marksdetails();
	}
}

class Sports implements Student
{
	int matchplyd,totalrun,totalwk;
	float batavg,bwlavg;

	public Sports(int nom,int tr,int tw)
	{
		matchplyd=nom;
		totalrun=tr;
		totalwk=tw;
		batavg=totalrun/(float)matchplyd;
		bwlavg=totalwk/(float)matchplyd;
	}

	public void sportdetails()
	{
		
		System.out.println("\n\t\t----# SPORTS DETAILS #----");
		System.out.println("\n\tNumber of match played:"+matchplyd);
		System.out.println("\tTotal run:"+totalrun);
		System.out.println("\tTotal wicket:"+totalwk);
		System.out.println("\n\tBatting average:"+batavg);
		System.out.println("\tBowling average:"+bwlavg);
	}
	public void getdetails()
	{
		sportdetails();
	}
}

class Inhr3c
{
	public static void main(String [] s)
	{
		Student s1=new Marks(40,85,65);
		s1.getdetails();
	
		s1=new Sports(15,750,30);
		s1.getdetails();

		System.out.println("\n\t------------------------------------------------");
		
		s1=new Marks(50,60,70);
		s1.getdetails();

		s1=new Sports(25,2000,45);
		s1.getdetails();
	}
}