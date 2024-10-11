package javacode;
import java.util.Scanner;

public class cipher{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String word = sc.next();int j=0;


        for(int i = 0;i<word.length();i++)
        {
            j=j+i;
            if(j<word.length())
            {
                char ch = word.charAt(j);
                System.out.print(ch);
            }
           
        
        }
    }
}