import java.util.*;
public class assignmentB
{
    private int n, a[];
    private void input()
    {
        int i = 0;
        String input;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.nextLine();
        // input = sc.nextLine();
        a = new int[n];
        // StringTokenizer str = new StringTokenizer(input);
        // while(str.hasMoreTokens() || i > n)
        // {
            // a[i] = Integer.valueOf(str.nextToken());
            // i++;
        // }
        for(i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
    }

    private void output()
    {
        int x = 0, i;
        x = ((n*(n+1))/2) - sumInArray(a);
        System.out.print(x);
    }

    private int sumInArray(int x[])
    {
        int i, a = 0;
        for(i = 0;i < n;i++)
            a += x[i];
        return a;
    }

    public static void main(String args[])
    {
        assignmentB ob = new assignmentB();
        ob.input();
        ob.output();
    }

}