import java.io.*;
class f4
{
	public static void main(String args[]) throws IOException
	{
		FileWriter f1=new FileWriter("./FileBuffer.txt",true);
		BufferedWriter bf=new BufferedWriter(f1);
		bf.write("Hello World");
		bf.close();	
	}
}