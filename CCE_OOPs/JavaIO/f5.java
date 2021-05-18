import java.io.*;
class f5
{
	public static void main(String args[]) throws IOException
	{
		FileReader f=new FileReader("./FileBuffer.txt");
		BufferedReader bf=new BufferedReader(f);
		int ch=bf.read();
		while(ch!=-1){
			System.out.print((char)ch);
			ch=bf.read();
		}
		bf.close();
	}
}