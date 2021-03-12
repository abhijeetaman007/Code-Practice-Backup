// class A 
// {
// 	void display()
// 	{
// 		System.out.println("From Class A");
// 	}
// }

// class B extends A
// {
// 	void show()
// 	{
// 		System.out.println("From Class B");
// 	}
// }

class t1
{
	void display()
	{
		System.out.println("Hello");
	}
	public static void main(String[] args) {
		// A obj=new B();
		// obj.show();
		// obj.display();
		t1 t=new t1();
		t.display();
	}

}