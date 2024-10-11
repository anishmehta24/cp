package javacode;
import java.util.Scanner;

public class stones {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n =sc.nextInt();
        String word = sc.next();
         int c=0;
       for(int i =0;i<n-1;i++)
       {
         char ch = word.charAt(i);
         char ch1 = word.charAt(i+1);
         if(ch==ch1)
         c++;
       } 
       System.out.println(c);
    }
}
