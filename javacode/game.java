package javacode;
import java.util.Scanner;

public class game {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int p = sc.nextInt();

        int a[] = new int[p];
        if(p>0)
        {
        
        for(int i = 0;i<p;i++)
        {
            a[i]=sc.nextInt();
            
        }
    }
        int c=0;int d=0;
        int q = sc.nextInt();
        int b[] = new int[q];
        for(int i = 0;i<q;i++)
        {
            b[i]=sc.nextInt();
        }
        
        for(int i=1;i<=n;i++)
        {
            c=0;
            if(p>0)
            {
            
            for(int j= 0;j<p;j++)
            {
                if(a[j]==i)
                {
                    c++;
                    break;
                }
                else
                {
                    for(int k=0;k<q;k++)
                    {
                       if(b[k]==i)
                       {
                       c++;
                       break;
                       }
                    }
                }
                
            }
        }
        for(int k=0;k<q;k++)
        {
           if(b[k]==i)
           {
             c++;
             break;
           }
        }
            if(c>0)
            {
                d++;
            }    
        }
        //  System.out.println(c);
        if(d==n)
        System.out.println("I become the guy.");
        else
        System.out.println("Oh, my keyboard!");
    }
}
