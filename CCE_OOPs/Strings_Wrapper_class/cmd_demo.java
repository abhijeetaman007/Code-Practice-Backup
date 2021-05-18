class cmd_demo
{
	public static void main(String args[])
	{
		int a[]=new int[args.length];
		for(int i=0;i<a.length;i++)
		{
			a[i]=Integer.parseInt(args[i]);
			if(a[i]%2==0)
			{
				System.out.println(a[i]+" is even number");
			}
		}
	}
}