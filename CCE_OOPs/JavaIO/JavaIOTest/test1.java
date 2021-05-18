import java.io.*;
class Onlyext implements FilenameFilter
	{
		String ext;
		public Onlyext(String e)
		{
			ext="."+e;
		}
		public boolean accept(File dir,String name)
		{
			return name.endsWith(ext);
		}

	}
class test1
{
	
	public static void main(String args[])
	{
		// /home/abhijeetsinha/Desktop/program_cpp/CCE_OOPs/JavaIO/JavaIOTest
		File f1=new File("./Example.txt");
		File f2=new File("./RenamedExample.txt");
		// File f3=new File("./Example1.txt");

		String s;
		s=f1.getPath();
		System.out.println(s);
		System.out.println(f1.getName());
		System.out.println(f1.getParent());
		System.out.println(f1.getAbsolutePath());
		System.out.println(f1.exists());
		System.out.println(f1.isAbsolute());
		System.out.println(f1.canWrite());
		System.out.println(f1.canRead());
		System.out.println(f1.isDirectory());
		System.out.println(f1.isFile());
		System.out.println(f1.lastModified());
		System.out.println(f1.length());
		System.out.println(f1.isFile());
		System.out.println(f1.exists());
		// System.out.println(f1.renameTo(f2));
		// System.out.println(f3.delete());
		File f4=new File("./Example1.txt");
		System.out.println(f4.mkdir());
		File f5=new File("/home/abhijeetsinha/Desktop/program_cpp/CCE_OOPs/JavaIO/JavaIOTest");
		// System.out.println(f5.mkdirs());
		// f5.delete();
		// System.out.println(f4.mkdirs("./Test/Example"));
		String l[]= f5.list();
		// System.out.println(l);
		
		System.out.println("Files in JavaIOTest are");
		for(int i=0;i<l.length;i++)
			System.out.println(l[i]);

		System.out.println("Text files are");
		Onlyext r=new Onlyext("txt");
		String l1[]= f5.list(r);
		for(int i=0;i<l1.length;i++)
			System.out.println(l1[i]);

	}
}