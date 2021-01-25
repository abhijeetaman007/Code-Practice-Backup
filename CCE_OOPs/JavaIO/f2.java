import java.io.*;
class f2
{
	public static void main(String args[]) throws IOException
	{
		FileOutputStream fout=new FileOutputStream("./FileExample.txt",true);
		String s="We are appending file to already created file";
		char ch[]=s.toCharArray();
		for(int i=0;i<s.length();i++)
		{
			fout.write(ch[i]);
		}
		fout.close();
	}
}