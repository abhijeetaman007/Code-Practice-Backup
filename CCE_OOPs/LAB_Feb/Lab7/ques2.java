class counter
{
	static int c;
	counter()
	{
		c++;
	}
}

class ques2
{
	public static void main(String[] args) 
	{
		counter a=new counter();
		counter a1=new counter();
		counter a2=new counter();
		System.out.println(a.c);	
		counter a3=new counter();
		System.out.println(a.c)	;

	}
}
