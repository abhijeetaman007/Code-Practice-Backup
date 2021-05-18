// Understanding immuatbility of String class  and no concept of literals in String Buffer
import java.util.*;
class t1
{
	public static void main(String args[])
	{
		String s="aman";
		String s1=s;
		// System.out.println(s[2]);  //String and char array are two diffent thing in java we can random access in char array not on string
		System.out.println(s1==s);
		s=s+" sinha";        // new object is created and assigned to s as string class is immutable
		System.out.println(s1==s);
		System.out.println(s);
		int a=10;
		int b=a;
		System.out.println(a);
		System.out.println(b);
		a=20;
		System.out.println(a);
		System.out.println(b);

		StringBuffer s2=new StringBuffer("Abhijeet");       
		StringBuffer s3=s2;
		System.out.println(s3==s2);
		// s2=s2+"Sinha"       //no literals in StringBuffer
		s2=s2.append(" Sinha");   // StringBuffer is mutable
		System.out.println(s2==s3);
		System.out.println(s2);

		String s4 = new String("miT");
		System.out.println(s4);
		char ch1[] = {'a','b','c'};
		String s5 = new String(ch1);
		System.out.println(s5);
		char ch[] = {'a','b','c','d','e','f'};
		System.out.println(ch);
		String s6 = new String(ch,2,3);
		System.out.println(s6);

		//Converting to char array
		char ch2[]=s.toCharArray();
		// char ch3[]=s3.toCharArray();//Directly we cant convert string builder to char array
		System.out.println(ch2[3]);
		System.out.println(ch2);
	}
}