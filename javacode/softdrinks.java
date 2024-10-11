package javacode;
import java.util.Scanner;

public class softdrinks {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int l = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        int p = sc.nextInt();
        int nl = sc.nextInt();
        int np = sc.nextInt();

        int t1 = (k*l)/nl;
        int t2 = p/np;
        int t3 = c * d;
        System.out.println((Math.min(Math.min(t1,t2),t3))/n);

    }
}
