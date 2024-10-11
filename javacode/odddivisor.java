package javacode;
import java.util.Scanner;
public class odddivisor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i=0;i<t;i++)
        {
            long n=sc.nextLong();
           
                while(n%2==0)
                {
                    n=n/2;
                }
                if(n==1)
                System.out.println("NO");
                else
                System.out.println("YES");
            
        
        }
    }
}
