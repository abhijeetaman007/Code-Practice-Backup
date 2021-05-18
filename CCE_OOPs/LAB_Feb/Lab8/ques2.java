abstract class area
{
	double area;
	abstract void calcarea();
	void display()
	{
		System.out.println("Area is "+area);
	}
}
class rectangle extends area
{
	double l,b;
	rectangle(double l,double b)
	{
		this.l=l;
		this.b=b;
	}
	void calcarea()
	{
		area=l*b;
	}
}
class circle extends area
{
	double r;
	circle(double r)
	{
		this.r=r;
	}
	void calcarea()
	{
		area=3.14*r*r;
	}
}
class ques2
{
	public static void main(String[] args) {
		circle c=new circle(100);
		c.calcarea();
		rectangle r=new rectangle(3,4);
		r.calcarea();
		c.display();
		r.display();
	}
}