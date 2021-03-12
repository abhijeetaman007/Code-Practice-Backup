// class superclass
// {
// 	void m()
// 	{
// 		System.out.println("Inside Super");
// 	}
// }
// class subclass extends superclass
// {
// 	private void m()
// 	{
// 		System.out.println("Inside Super");
// 	}
// }
// class test
// {
// 	public static void main(String[] args) {
// 		subclass s=new subclass();
// 		s.m();
// 	}
// }


// (Case of Error because there is conflict)
// class A
// {
// 	int show()
// 	{
// 		System.out.println("Inside show 1");
// 		return x;	
// 	}
// 	void show()
// 	{
// 		System.out.println("Inside show 2");
// 	}
// }



class A
{
	int show(int x)
	{
		System.out.println("Inside show 1");
		return x;	
	}
	void show()
	{
		System.out.println("Inside show 2");
	}
}
class test
{
	public static void main(String[] args) {
		A a=new A();
		a.show(2);
	}
}