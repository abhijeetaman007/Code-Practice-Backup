// employee  name,  city,  basic  salary,  dearness  allowance  (DA%)  and  house  rent  (HRA%).
import java.util.*;
class Employee
{
	String name,city;
	double sal,da,hr,t;
	void getdata(String name,String city,double sal,double da,double hr)
	{
		this.name=name;
		this.city=city;
		this.sal=sal;
		this.da=da;
		this.hr=hr;
	}
	void calculate()
	{
		t=sal+sal*da/100+sal*hr/100;
	}
	void display()
	{
		System.out.println("Total is "+t);
	} 
}

class ques2
{
	public static void main(String args[])
	{
		Employee a=new Employee();
		String name,city;
		double sal,da,hr,t;
		Scanner sc=new Scanner(System.in);
		name=sc.next();
		city=sc.next();
		sal=sc.nextDouble();
		da=sc.nextDouble();
		hr=sc.nextDouble();
		a.getdata(name,city,sal,da,hr);
		a.calculate();
		a.display();
	}
}