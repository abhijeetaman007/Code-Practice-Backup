import java.lang.Math;
class Number
{
	private double n;
	Number()
	{
		n=0;
	}
	Number(int n)
	{
		this.n=n;
	}
	boolean isZero()
	{
		if(n==0)
			return true;
		else
			return false;
	}
	boolean isPositive()
	{
		if(n>0)
			return true;
		else
			return false;
	}
	boolean isNegative()
	{
		if(n<0)
			return true;
		else
			return false;
	}
	boolean isOdd()
	{
		// int num=n;
		if(n%2==1)
			return true;
		else return false;
	}
	boolean isPrime()
	{
		for(int i=2;i<Math.sqrt(n);i++)
		{
			if(n%i==0)
				return false;
		}
		return true;
	}
	boolean isArmstrong()
	{
		int s=0;
		int num=(int)n;
		while(num!=0)
		{
			int a=num%10;
			s+=Math.pow(a,3);
			num=num/10;
		}
		if(s==n)
			return true;
		else 
			return false;
	}
}
class ques5
{
	public static void main(String args[])
	{
		Number n=new Number(153);		
		System.out.println("isZero " + n.isZero());
		System.out.println("isPositive "+n.isPositive());
		System.out.println("isNegative"+n.isNegative());
		System.out.println("isOdd"+n.isOdd());
		System.out.println("isPrime"+n.isPrime());
		System.out.println("isArmstrong"+n.isArmstrong());

	}
}