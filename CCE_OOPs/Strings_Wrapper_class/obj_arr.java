import java.util.Scanner;

class student
{
	int id;
	String name;
	student(int id,String name)
	{
		this.id=id;
		this.name=name;
	}
	void disp()
	{
		System.out.println("Id is "+id+" Name is "+name);

	}
}




class obj_arr
{
	public static void main(String args[])
	{
		student s[]=new student[4];   //Array of student--with 4 refernce created
		Scanner sc=new Scanner(System.in);
		for(int i=0;i<s.length;i++)
		{
			String name;
			name=sc.nextLine();
			s[i]=new student(i+1,name);//Actual creation of object
		}
		for(int i=0;i<s.length;i++)
			s[i].disp();
	}
}