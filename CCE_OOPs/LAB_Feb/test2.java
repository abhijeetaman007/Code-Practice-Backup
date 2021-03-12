// class test2
// {
// 	test2()
// 	{
// 		System.out.println("Demo");
// 	}
// 	public static void main(String[] args) {
// 		new test2();
// 	}
// }

class A
{
	void show()
	{
		System.out.println("Test message class A");
	}
}

class B extends  A
{
	// int show()                          //Gives Error
	// {
	// 	System.out.println("Test message class B");
	// 	return 1;
	// }
	void show(int x)
	{
			System.out.println("Test message class B" + x);
	}
}
 class test2
 {
 	public static void main(String[] args) {
 		B obj=new B();
 		obj.show(2);
 	}
 }