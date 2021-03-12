class demo
{
	int meth(Integer x)
	{
		x=x+1;
		return x;
	}
	static void test()
	{
		System.out.println("This is a test meth");
	}
}
class ques3
{
	public static void main(String[] args) {
		demo a=new demo();
		Integer x=a.meth(100);
		System.out.println(x);
		a.test();
	}
}