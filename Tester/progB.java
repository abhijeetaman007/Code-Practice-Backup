import java.util.*;
import java.io.*;
class progB
{
    public static void main(String args[])throws IOException
    {
        Scanner x= new Scanner(System.in);
        int[] a;
        int l,i,j,temp,f=0,c=0;
        l=x.nextInt();
        a=new int[l];

        for(i=0;i<l;i++)
            a[i]=x.nextInt();
        
        // for(i=0;i<l-1;i++)
        // {
        //     for(j=0;j<l-i-1;j++)
        //     {
        //         if(a[j]>a[j+1])
        //         {
        //             temp=a[j];
        //             a[j]=a[j+1];
        //             a[j+1]=temp;
        //         }
        //     }
        // }
        Arrays.sort(a);
 
        for(i=0;i<l;i++)
            System.out.print(a[i]+" ");
        System.out.println();
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
            
        for(i=0;i<l;i++)
            System.out.print(a[i]+" ");
        System.out.println();    

        System.out.println(c);
    }
}