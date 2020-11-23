class vowel
{
	public static void main(String args[])
	{
		String s="Abhijeet sinha";
		int c=0;
		for(int i=0;i<s.length();i++)
		{
			if(s.charAt(i)=='a'||s.charAt(i)=='e'||s.charAt(i)=='o'||s.charAt(i)=='i'||s.charAt(i)=='u'||s.charAt(i)=='A'||s.charAt(i)=='E'||s.charAt(i)=='I'||s.charAt(i)=='O'||s.charAt(i)=='U')
			{
				System.out.println(s.charAt(i));
				c=c+1;
			}
		}
		System.out.println(c);
	}
}