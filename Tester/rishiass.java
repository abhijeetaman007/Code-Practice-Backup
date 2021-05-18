import java.io.*;
class rishiass
{
    public static void main(String args[])throws IOException
    {
        System.out.println("tEST");

        // BufferedReader x=    new BufferedReader(new InputStreamReader(System.in));
        int i,l=0,k;
        String a;
        // System.out.println();
        // a=x.readLine();
        // a=x.nextInt();
        i=Integer.parseInt(a.substring(0,a.indexOf(' ')));
        k=Integer.parseInt(a.substring(a.indexOf(' ')+1));
        k=240-k;
        while(k>0&&l<=i)
        {
            k=k-5*l;
            l++;
        }
        System.out.println(l==0?0:--l);
    }
}