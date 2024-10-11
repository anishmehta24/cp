package javacode;
import java.util.Scanner;

public class subtract {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int m=n;
        for(int i=0;i<k;i++)
        {
            int d=m%10;
            if(d==0)
            {
                m=m/10;
            }
            else
            m--;
        }
        System.out.println(m);
    }
}
