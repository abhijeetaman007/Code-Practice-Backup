public class loop_1
{
	public static void main(String args[])
	{
		int c=0;
		for(int i=1;i<=4;i++)
		{
			for(int j=1;j<=i;j++)
			{
				c+=1;
				System.out.print(c+" ");
			}
			System.out.print("\n");
		}
	}
}