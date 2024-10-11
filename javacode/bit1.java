package javacode;
import java.util.Scanner;

public class bit1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String s1 = sc.next();
        String newS="";
        for(int i = 0;i<s.length();i++)
        {
            int ch =(int)s.charAt(i);
            int ch1=(int) s1.charAt(i);
            if(ch==ch1)
            {
                newS=newS+"0";
            }
            else
            newS=newS+"1";
        }
        System.out.println(newS);
    }
}
