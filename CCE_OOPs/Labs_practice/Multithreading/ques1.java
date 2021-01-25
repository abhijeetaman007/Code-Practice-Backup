class Newthread_interface implements Runnable
{

	Newthread_interface()
	{
		Thread t=new Thread(this,"InterfaceThread");
		t.start();
	}

	public void run()
	{
		System.out.println("From Newthread_interface");
		try
		{
			for(int i=0;i<5;i++)
			{
				System.out.println("From Thread interface "+i);
					Thread.sleep(500);
			}
		}
		catch(InterruptedException e)
		{
			System.out.println("InterruptedException");
		}
		System.out.println("Exting from InterfaceThread");
	}
}

class Newthread_interface2 implements Runnable
{
	public void run()
	{
		System.out.println("From Newthread_interface2");
		try
		{
			for(int i=0;i<5;i++)
			{
				System.out.println("From Thread interface 2 "+i);
					Thread.sleep(600);
			}
		}
		catch(InterruptedException e)
		{
			System.out.println("InterruptedException");
		}
		System.out.println("Exting from InterfaceThread 2");
	}	
}

class newthread extends Thread
{
	public void run()
	{
		System.out.println("From New Thread extends");
		try
		{
			for(int i=0;i<5;i++)
			{
				System.out.println("From Thread extends "+i);
					Thread.sleep(700);
			}
		}
		catch(InterruptedException e)
		{
			System.out.println("InterruptedException");
		}
		System.out.println("Exting from extends");
	}
}


class ques1
{
	public static void main(String args[])
	{
		new Newthread_interface();

		Newthread_interface2 newth1=new Newthread_interface2();
		Thread t1=new Thread(newth1,"interface2");
		t1.start();

		newthread t2=new newthread();
		t2.start();

		System.out.println("From Main");
		try
		{
			for(int i=0;i<5;i++)
			{
				System.out.println("From Main "+i);
				Thread.sleep(2000);
			}
		}
		catch(InterruptedException e)
		{
			System.out.println("InternalError");
		}
		System.out.println("Exting from Main");

	}
}