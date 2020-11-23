import java.util.Scanner;
class decimaltobinary
{
	public static void main(String args[])
	{
		Scanner s= new Scanner(System.in);
		int a=s.nextInt();
		System.out.println(a);
		int arr[]=new int[50];
		int i=0;
		while(a!=0)
		{
			arr[i]=a%2;
			a=a/2;
			i++;
		}
		for(int j=i;j>=0;j--)
			System.out.print(arr[j]);
	}
}