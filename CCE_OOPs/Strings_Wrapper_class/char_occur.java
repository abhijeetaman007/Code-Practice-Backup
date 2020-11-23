class char_occur
{
	public static void main(String args[])
	{
		String s="GeeksforGeeks";
		int a[]=new int[256];
		for(int i=0;i<256;i++)
		{
			a[i]=0;
		}	
		for(int i=0;i<s.length();i++)
		{
			a[(int)(s.charAt(i))]+=1;
		}
		for(int i=0;i<256;i++)
		{
			if(a[i]!=0){
				System.out.println((char)(i)+" "+a[i]);
			}
			// System.out.println(a[i]);

		}		

	}
}