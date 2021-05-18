// Use of Dynamic method Dispatch with interfaces
interface A
{
	static final int x=100;
	void disp();
}
class B implements A
{
	public void disp()
	{
		System.out.println("From class B");
	}
}
class C implements A
{
	public void disp()
	{
		System.out.println("From class C");
	}
}
class test_interface
{
	public static void main(String args[])
	{
		B b=new B();
		C c=new C();
		// b.disp();
		A a=b;
		a.disp();
		a=c;
		a.disp();
	}
}