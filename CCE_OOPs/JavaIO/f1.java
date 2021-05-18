import java.io.*; 
class f1
{
	public static void main(String args[]) throws IOException
	{
		File F1=new File("/home/abhijeetsinha/Desktop/program_cpp/CCE_OOPs/JavaIO/FileExample.txt");
		System.out.println("Exists "+F1.exists());
		F1.createNewFile();
		System.out.println("Exists "+F1.exists());
		System.out.println("File Size "+F1.length());
		System.out.println(F1);

	}	
}