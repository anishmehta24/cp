package javacode;
import java.util.Scanner;

public class apartment {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for(int i=0;i<t;i++)
        {
            int n = sc.nextInt();
            int x = sc.nextInt();

            if(n<3)
            System.out.println(1);
            else
            printAnswer(n,x);
        }
    }

    public static void printAnswer(int n,int x)
    {
        int c=0;
        int k=1,m=0;
        while(true)
        {
            for(int i=m*x+3;i<=k*x+2;i++)
            {
                if(n==i)
                {
                System.out.println(k+1);
                c++;
                break;
                }
            }
            m++;
            k++;
            if(c>0)
            break;
        }

    }
}
