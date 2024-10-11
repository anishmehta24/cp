package javacode;
import java.util.Scanner;

public class hulk {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (n == 1) {
            System.out.println("I hate it");
        }
        String s1 = " I hate", s2 = " I love", s3 = " that", s = "I hate";
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                s = s + s3 + s2;
            } else {
                s = s + s3 + s1;
            }

        }
        if (n > 1) {
            System.out.println(s + " it");
        }
    }
}
