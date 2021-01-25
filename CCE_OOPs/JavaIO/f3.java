import java.io.*;
class f3
{
	public static void main(String args[]) throws IOException
	{
		FileInputStream fin=new FileInputStream("./FileExample.txt");
		int i=fin.read();
		while(i!=-1)
		{
			System.out.print((char)i);
			i=fin.read();
		}
		fin.close();
	}
}