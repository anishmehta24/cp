package javacode;
import java.util.Scanner;

public class square {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for(int i=0;i<t;i++)
        {
            String s = sc.next();
            int l =s.length();

            if(l%2!=0)
            System.out.println("NO");
            else
            {
                String s1 = s.substring(0, l/2);
                String s2 = s.substring(l/2);
                if(s1.equalsIgnoreCase(s2))
                System.out.println("YES");
                else
                System.out.println("NO");
            }
                
        }
   }
}
