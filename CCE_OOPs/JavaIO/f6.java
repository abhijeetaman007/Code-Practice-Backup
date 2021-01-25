import java.io.*;
class f6
{
	public static void main(String args[]) throws IOException
	{
		BufferedReader bf=new BufferedReader(new FileReader("./FileBuffer.txt"));
		String s=bf.readLine();
		while(s!=null)
		{
			// System.out.println("in");
			System.out.println(s);
			s=bf.readLine();
		}
		bf.close();
	}
}