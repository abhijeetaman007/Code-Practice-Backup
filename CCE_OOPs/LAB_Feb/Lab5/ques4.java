import java.util.*;
class Complex
{
	int real;
	int img;
	Complex()
	{
		real=0;
		img=0;
	}
	Complex(int r,int i)
	{
		real=r;
		img=i;
	}
	void add(int x,Complex y)
	{
		real=real+x+y.real;
		img=img+y.img;
	}
	void add(Complex x,Complex y)
	{
		real=real+x.real+y.real;
		img=img+y.img+x.img;
	}
	void display()
	{
		System.out.println("Complex Number is : "+real+"+"+img+"i");	
	}
}
class ques4
{
	public static void main(String args[])
	{
		Complex c1=new Complex(4,5);
		Complex c2=new Complex(2,3);
		Complex c3=new Complex();
		c3.add(c1,c2);
		c3.display();
		Complex c4=new Complex();
		c4.add(2,c1);
		c4.display();
	}
}