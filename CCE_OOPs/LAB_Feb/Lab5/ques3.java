import java.util.*;
class Time
{
	long h,m,s,t_s;
	Time()
	{
		h=0;m=0;s=0;
	}
	Time(long h,long m,long s)
	{
		this.h=h;
		this.m=m;
		this.s=s;
		t_s=h*3600+m*60+s;
	}
	void addtime(Time t1,Time t2)
	{
		t_s=t1.t_s+t2.t_s;
		h=t_s/3600;
		m=(t_s%3600)/60;
		s=(t_s%3600)%60;
	}
}
class ques3
{
	public static void main(String[] args) {
		// Scanner sc=new Scanner(System.in);
		// long h=sc.nextLong();
		// long m=sc.nextLong();
		// long s=sc.nextLong();
		Time t1=new Time(4,40,10);
		Time t2=new Time(3,20,40);
		Time t3=new Time();
		t3.addtime(t1,t2);
		System.out.println("Time is "+t3.h+":"+t3.m+":"+t3.s);
	}
}