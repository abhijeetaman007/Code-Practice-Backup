interface A
{
	final static int x=10;
}
class test
{
	// // public static void main(String args[])
	// // {
	// // 	// int a;
	// // 	// double b=3.4;
	// // 	// a=(int)b;  //Explicit typecasting or narrowing
	// // 	// System.out.println(a);
	// // 	// System.out.println(b);
	// // 	// a=3;
	// // 	// b=a;   //Implict/Automatic Type Casting/Widening
	// // 	// System.out.println(a);
	// // 	// System.out.println(b);
	// // 	byte b;
	// // 	b=50;
	// // 	System.out.println(b);
	// // 	b=b*50;
	// // 	System.out.println(b);


	// // }
	// static void hello()
	// {
	// 	System.out.println("Hello");
	// }
	public static void main(String args[]) 
	  {    
   //       	int a[]=new int[10];
   //       	a=new int[20];
   //       	int b=a.length;
			// System.out.println(b);
			// hello();

	  		try
	  		{
	  			int x=10;
	  			int y=20;
	  			int z=y/x;
	  			System.out.println(z);
	  		}

	  		catch(Exception e)
	  		{
	  			System.out.println("Exception");
	  		}	  		
	  		finally
	  		{
	  			System.out.println("From finally");
	  		}

	  		System.out.println("Last Line "+A.x);

		}

}