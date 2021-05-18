import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class question1
{
    public static void main (String[] args) throws java.lang.Exception
  {
    // your code goes here
    Scanner scan = new Scanner(System.in);
        // int l= scan.nextInt();
        // int i,j,k;
        // String[] b = new String[n];
        // b[0]="nothing";
       // Scanner x=new Scanner(System.in);
        int[] a;
        int l,i,j,temp,f=0,c=0;
        l=scan.nextInt();
        a=new int[l];

        for(i=0;i<l;i++)
            a[i]=scan.nextInt();
        
        for(i=0;i<l-1;i++)
        {
            for(j=0;j<l-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
 
        
        do
        {
            f=0;
            for(i=0;i<=l-2;i++)
            {
                if(a[i]==a[i+1])
                {
                    a[i+1]=a[i+1]+1;
                    f++;
                    c++;
                    break;
                }
            }
 
        }while(f!=0);
        
        System.out.println(c);
  }
}
