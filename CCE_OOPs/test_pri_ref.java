class superman
{
	private int x=700;
	public int y=400;
	void disp()
	{
		System.out.println("x is "+x+" y is "+y);
	}
}
class man extends superman
{
	void disp()
	{
		// System.out.println(x);
		System.out.println(y);
	}
}

class test_pri_ref
{
	public static void main(String args[])
	{
		man m=new man();
		// m.disp();
		// superman s=new superman();
		// s.disp();
		superman s1=m;
		s1.disp ();
	}
}
