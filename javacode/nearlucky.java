package javacode;
import java.util.Scanner;

public class nearlucky {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();
        int c=0;
        for(int i=0;i<n.length();i++)
        {
           char ch=n.charAt(i);
           if(ch=='4'||ch=='7')
            c++;
        }
        if(c==4||c==7)
        System.out.println("YES");
        else
        System.out.println("NO");
    }
}
