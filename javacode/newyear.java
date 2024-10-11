package javacode;
import java.util.Scanner;

public class newyear {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int n = sc.nextInt();
            if(n==2020||n==2021)
            System.out.println("YES");

            else if(n<4040)
            System.out.println("NO");
            else
            {

            int a = n/2020;

            int b = n%2020;
            if(b<=a)
            System.out.println("YES");
            else
            System.out.println("NO");
            }
           
            
        }
    }
}
