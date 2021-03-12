import java.io.*;
class filedemo
{
	public static void main(String[] args) throws IOException
	 {
		// FileWriter fout=new FileWriter("/home/abhijeetsinha/Desktop/program_cpp/CCE_OOPs/t1.txt",true);
		// String s=new String("Hello World");
		FileInputStream fin=new FileInputStream("/home/abhijeetsinha/Desktop/program_cpp/CCE_OOPs/t1.txt");
		// char ch[]=s.toCharArray();
		// for(int i=0;i<ch.length;i++)
		// {
			// System.out.println(ch[i]);
		// }
			// fout.write(s);
	 	// File f=new File("/home/abhijeetsinha/Desktop/program_cpp/CCE_OOPs/t1.txt");
		// System.out.println(f.length());
		// System.out.println(f.getParent());
		// System.out.println(f.getPath());
		// System.out.println(f.getName());
		// System.out.println(f.isDirectory());

		// fout.close();
		// f.close();
		// System.out.println("File written");  
		// FileOutputStream f=new FileOutputStream("/home/abhijeetsinha/Desktop/program_cpp/CCE_OOPs/t1.txt");
		// for(int i=0;i<ch.length;i++)
		// {
			// f.write(ch[i]);
		// }
		while(true)
		{
			int i=fin.read();
			if(i==-1)
				break;
			else
				System.out.print((char)i);
		}
		fin.close();

	}
}