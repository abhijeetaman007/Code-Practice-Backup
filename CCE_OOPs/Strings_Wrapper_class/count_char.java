class count_char
{
	public static void main(String args[])
	{
		String s="abhijaat Sinhy";
		int c=0;
		for(int i=0;i<s.length();i++)
		{
			if(s.charAt(i)=='a'){
				System.out.println(s.charAt(i));
				c++;
			}
		}
		s=s.replace('a','b');
		System.out.println(c);
		System.out.println(s);
		// char c=charAt(0);
		s=s.replace(s.charAt(0),s.charAt(s.length()-1));
		System.out.println(s);
	}
}