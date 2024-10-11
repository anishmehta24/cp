package javacode;
import java.util.Scanner;

public class codeforce {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String s="codeforces";

        for(int i=0;i<t;i++)
        {
            String ch =sc.next();
            int n=s.indexOf(ch);
            if(n!=-1)
            System.out.println("YES");
            else
            System.out.println("NO");
        }


    }
}
