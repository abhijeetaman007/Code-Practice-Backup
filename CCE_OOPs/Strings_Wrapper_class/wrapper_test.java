class wrapper_test
{
	public static void main(String args[])
	{
		// Integer x=10;
		Integer y=Integer.valueOf("20");
		System.out.println(y);
		int z=y.intValue();
		System.out.println(z);
		String s=Double.toString(z);
		s=s+"hello";
		System.out.println(s);
		Float a=Float.parseFloat("24.89");
		System.out.println(a);
		StringBuffer sb = new StringBuffer("Object Programming ");
		StringBuffer s1=sb;
		sb.insert(7, "Oriented ");
		System.out.println(sb);
		System.out.println(s1==sb);
		String t="hello";
		String t1=t;
		t=t+" world";
		System.out.println(t==t1);

	}
}