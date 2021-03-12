import java.util.*;
class ques3
{

	static boolean isPalindrome(String s)
	{
		for(int i=0;i<=s.length()/2;i++)
		{
			if(s.charAt(i)!=s.charAt(s.length()-1-i))
				return false;
		}
		return true;
	}	

	static String alphaorder(String s)
	{
		char c[]=s.toCharArray();
		System.out.println("Size is "+c.length);
		Arrays.sort(c);

		String str=new String(c);
		return str;	
	}




	public static void main(String[] args) 
	{

		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		System.out.println("Your String is "+s);
		StringBuffer str = new StringBuffer(s);
		// System.out.println("Do you want to run?");
		String s2;	
		do
		{
			char ch;
			ch=sc.next().charAt(0);
			switch(ch)
			{
				case '1':if(isPalindrome(s))
						{
							System.out.println("yes it is a palindrome");
						}
						else
						{
							System.out.println("Not a palindrome");
						}
						break;
				case'2':System.out.println("In Alphabatical Order: "+alphaorder(s));
						break;
				case'3':System.out.println("Reversed String : "+str.reverse());
						str.reverse();
						break;
				case'4':System.out.println("Concatinated string :" +(s+str.reverse()));
						str.reverse();
						break;
				default: System.out.println("Invalid Choice");
								
			}
			System.out.println("Do you want to run?");
			s2=sc.next();	
		}while(s2.equals("yes"));
	}
}