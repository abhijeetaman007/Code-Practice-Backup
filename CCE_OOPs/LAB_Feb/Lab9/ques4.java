import java.util.*;
class ques4
{
		static String togglecases(String s)
		{
			String a=new String();
			for(int i=0;i<s.length();i++)
			{
				a=a+(char)((int)s.charAt(i)^(32));
			}	
			return a;
		}
		public static void main(String[] args) 
		{
			String s1,s2;
			Scanner sc = new Scanner(System.in);
			s1=sc.next();
			s2=sc.next();
			StringBuffer s=new StringBuffer(s1);
			char ch,c;
			do
			{	
				ch=sc.next().charAt(0);
				switch(ch)
				{
					case '1':System.out.println(s1.compareTo(s2));
							break;
					case '2':System.out.println(togglecases(s1));
							System.out.println(togglecases(s2));
							break;
					case '3':System.out.println(s1.indexOf(s2));
							break;
					case '4':
							int x=-1; 
							do
							{
								 x=s.indexOf(s2,x+1);
								 if(x!=-1)
								 s.replace(x,x+1,"hello");
								System.out.println(x);

							}while(x!=-1);
							System.out.println(s);
							break;
				}
				System.out.println("Do you want to run again?");
				c=sc.next().charAt(0);				
			}while(c!='n');
		}	
}