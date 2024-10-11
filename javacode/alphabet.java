package javacode;
import java.util.Scanner;

public class alphabet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();
        String s2 = sc.next();
        int i=s1.compareToIgnoreCase(s2);

        //System.out.println(i);

        if(i>0)
        System.out.println(1);
        else if(i<0)
         System.out.println(-1);
        else
        System.out.println(0);
    }
}
