public class testThrow1{
	static void validate(int age)
	{
		if(age<18)
		{
			throw new ArithmeticException("Not Valid");
		}
		else
			System.out.println("Welcome to vote");
	}
	public static void main(String args[])
	{
		try{
			validate(13);
		}
		System.out.println("hello");
		catch(ArithmeticException e)
		{
			System.out.println("You are not allowed to vote");
		}
		System.out.println("Rest of code");
	}
}