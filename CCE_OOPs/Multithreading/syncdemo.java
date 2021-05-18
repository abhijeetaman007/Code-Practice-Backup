class thread2 extends Thread
{
	public void run()
	{
		for(int i=0;i<5;i++)
		{
			System.out.println("Thread 2  :" + i );
		}
	}
}

class thread1 extends Thread
{
	public void run()
	{
		for(int i=0;i<5;i++)
		{
			System.out.println("Thread 1  :" + i );
		}

	}
}

class syncdemo
{
	public static void main(String[] args) throws InterruptedException
	{
		thread1 t1=new thread1();
		t1.start();
		// t1.join();
		// Thread.sleep(1000);
		thread2 t2=new thread2();
		t2.start();			
	}
}