package javacode;
import java.util.Scanner;

public class marathan1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a,b,c,d;
        for(int i=1;i<=n;i++)
        {
            int t=0;
             a = sc.nextInt();
             b = sc.nextInt();
             c = sc.nextInt();
             d = sc.nextInt();
            if(b>a)
            t++;
            if(c>a)
            t++;
            if(d>a)
            t++;
             System.out.println(t);
        }
    }
}
