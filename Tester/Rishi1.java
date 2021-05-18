import java.io.*;
public class Rishi1
{
    public static void main(String args[])throws IOException
    {
        BufferedReader x=new BufferedReader(new InputStreamReader(System.in));
        int i,l=1,k;
        i=Integer.parseInt(x.readLine());
        k=Integer.parseInt(x.readLine());
        k=240-k;
        while(k>0&&l<=i)
        {
            k=k-5*l;
             System.out.println(l);
             System.out.println(k);
            l++;

        }
        // System.out.println(l);
        l=l-1;
        System.out.println(l);
    }
}