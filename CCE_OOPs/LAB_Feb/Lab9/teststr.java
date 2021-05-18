class A
{
	int i=10;

} 
class B extends A
{
	int j=3;
	void display()
	{
		System.out.println(super.i);
	}
}

class teststr
{
	public static void main(String[] args) {
		// String s="hello";
		// int i=0;
		// while(s.charAt(i)!='\0')
		// {
		// 	System.out.println(s.charAt(i));
		// 	i++;
		// }
		// String s[]=new String[3];
		// s[0]="Aman";
		// s[1]="Alex";
		// s[2]="Abhijeet";
		// for(int i=0;i<s.length;i++)
		// {
		// 	System.out.println(s[i]);
		// }
		// String s="Harry";
		// String s1="Harry";
		// String s2=new String("Harry");
		// String s3=new String(s2);
		// System.out.println(s==s1);
		// System.out.println(s==s2);
		// System.out.println(s1==s3);
		// System.out.println(s3==s2);
		// System.out.println(s1==s2);
		// System.out.println(s1.equals(s2));

		// System.out.println(s1==s2);

		// String s1 ="four : "+2+2;
		// String s2= "four : "+(2+2);
		// System.out.println(s1);
		// System.out.println(s2);
		 B x=new B();
		x.display();
	}
}
