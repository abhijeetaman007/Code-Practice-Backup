import java.util.*;
class ques1
{
	public static void main(String[] args) 
	{
			String s;
			Scanner sc=new Scanner(System.in);
			s=sc.nextLine();
			int words=0,lines=0,vowels=0,chars=0;
			chars=s.length();
			for(int i=0;i<chars;i++)
			{
				if(s.charAt(i)==' ')
					words++;
				if(s.charAt(i)=='\n')
					lines++;
				if(s.charAt(i)=='a'||s.charAt(i)=='e'||s.charAt(i)=='i'||s.charAt(i)=='o'||s.charAt(i)=='u')
				{
					vowels++;
				}
			}
			System.out.println("Characters: "+chars);
			System.out.println("Words: "+words);
			System.out.println("vowels: "+vowels);
			System.out.println("Lines: "+lines);
	}	
}