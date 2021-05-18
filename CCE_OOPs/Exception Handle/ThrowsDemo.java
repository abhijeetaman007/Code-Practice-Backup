class ThrowsDemo
{
	static void throwOne()
	{
		System.out.println("Inside throwOne.");
		try{
		throw new IllegalAccessException("demo");
		}
		catch(IllegalAccessException e)
		{
			System.out.println(e);
			System.out.println("Try catch used");
		}
	}
	public static void main(String args[])
	{
		throwOne();
	}
}