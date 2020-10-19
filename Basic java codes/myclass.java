
public class myclass
{
    private int x;
    
    public myclass()
    {
        x = 0;
    }
    public static void main(String[] args)
    {
        myclass myobj=new myclass();
        System.out.println(myobj.sampleMethod(5));
    }
    public int sampleMethod(int y)
    {
        return x + y;
    }
}
