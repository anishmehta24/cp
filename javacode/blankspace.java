package javacode;
import java.util.Scanner;

public class blankspace {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int l = sc.nextInt();
            int a[] = new int[l];
            int c=0,m=0;
            for(int j=0;j<l;j++)
            {
                a[j]=sc.nextInt();
            }
            for(int j=0;j<l;j++)
            {
                if(a[j]==0)
                {
                    for(int k=j;k<l;k++)
                    {
                        if(a[k]==0)
                        {
                            c++;
                        }
                        else
                        {
                            break;
                        }
                    }            
                }
                if(c>m)
                {
                    m=c;
                }
                c=0;
            }
            System.out.println(m);
        }
    }
}
