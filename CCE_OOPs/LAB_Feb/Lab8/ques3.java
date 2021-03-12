interface area
{
	void calcarea();
}
class rectangle implements area
{
	double l,b,area;
	rectangle(double l,double b)
	{
		this.l=l;
		this.b=b;
	}
	public void calcarea()
	{
		area=l*b;
		System.out.println("Area is "+area);
	}
}
class circle implements area
{
	double r,area;
	circle(double r)
	{
		this.r=r;
	}
	public void calcarea()
	{
		area=3.14*r*r;
		System.out.println("Area is "+area);
	}
}
class ques3
{
	public static void main(String[] args) {
		circle c=new circle(5);
		rectangle r=new rectangle(4,5);
		c.calcarea();
		r.calcarea();
	}
}