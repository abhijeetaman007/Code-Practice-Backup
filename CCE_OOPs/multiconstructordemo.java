



class First
{
	int x=10;
	int y=30;
		
	First()
	{
		System.out.println("From First");
	}
}

class Second extends First
{
	protected int x=20;
	Second()
	{
		System.out.println("From Second");
	}
}

class Third extends Second
{
	int x=40;
	Third()
	{
		// super();

		System.out.println("From Third");
		System.out.println(x);
		System.out.println(super.y);
	}

}


class multiconstructordemo
{
	public static void main(String[] args) {
		Third t=new Third();

	}
}