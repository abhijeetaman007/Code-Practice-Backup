import java.util.*;
	class box
	{
		double h;
		double w;
		double l;
		double v;		
		void setdim(double l,double w,double h)
		{
			this.l=l;
			this.w=w;
			this.h=h;
		}
		double volume()
		{
			v=l*w*h;
			return v;
		}
	}

	class ques1
	{
		public static void main(String args[])
		{
			box a=new box();
			Scanner sc=new Scanner(System.in);
			double l=sc.nextDouble();
			double w=sc.nextDouble();
			double h=sc.nextDouble();
			a.setdim(l,w,h);
			System.out.println("Volume is "+a.volume());
		}
	}