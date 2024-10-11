package javacode;
import java.util.Scanner;

public class bit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s[] = new String[n];int k=0;
        for(int i=0;i<n;i++)
        {
            s[i] = sc.next();
        }
        for(int i=0;i<n;i++)
        {
           char ch = s[i].charAt(0);
           if(ch=='X'||ch=='x')
           {
            char ch1 = s[i].charAt(1);
            if(ch1=='+')
            {
                k++;
            }
            else
            {
                k--;
            }
           }
           else if(ch=='+')
           {
            k++;
           }
           else
           {
            k--;
           }

        }
        System.out.println(k);


    }
}
