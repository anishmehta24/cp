package javacode;
import java.util.Scanner;

public class lucky {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t = sc.nextInt();
        for(int i = 0;i<t;i++)
        {
            String n =sc.next();
            char ch1=n.charAt(0);
            char ch2=n.charAt(1);
            char ch3=n.charAt(2);
            char ch4=n.charAt(3);
            char ch5=n.charAt(4);
            char ch6=n.charAt(5);
            int sum1= (int)ch1+(int)ch2+(int)ch3;
            int sum2= (int)ch4+(int)ch5+(int)ch6;
            if(sum1==sum2)
            System.out.println("YES");
            else
            System.out.println("NO");
        }
       
    }
}
