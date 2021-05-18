import java.io.*;
class f7
{
	public static void main(String args[]) throws IOException
	{
		BufferedReader bf=new BufferedReader(new FileReader("./FileBuffer.txt"));
		char ch[]=new char[50];
		bf.read(ch,7,4);
		System.out.println(ch);
		bf.close();
	}
}