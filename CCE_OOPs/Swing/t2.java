class A
{
	void disp(B b)
	{
		System.out.println("B");
	}
	void disp(A a)
	{
		System.out.println("A");
	}
}
class B extends A
{
	// void disp()
	// {
		// System.out.println("B");
	// }
}

class t2
{
	public static void main(String[] args) {
		A a=new A();
		B b=new B();
		a.disp(a);
		b.disp(b);

	}
}