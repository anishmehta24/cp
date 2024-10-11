package javacode;
import java.util.Scanner;

public class reverse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1=sc.next();
        String s2=sc.next();
        String newstr="";
        for(int i=0;i<s1.length();i++)
        {
            char ch = s1.charAt(i);
            newstr=ch+newstr;
        }

        if(newstr.equals(s2))
        System.out.println("YES");
        else
        System.out.println("NO");
    }
}
