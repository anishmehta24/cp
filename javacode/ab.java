package javacode;
import java.util.Scanner;

public class ab {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int a,b;
        for(int i=0;i<t;i++)
        {
            a = sc.nextInt();
            b = sc.nextInt();
            int sum = a+b;
            System.out.println(sum);
        }
    }
}
