package javacode;
import java.util.Scanner;

public class yes {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int n = sc.nextInt();
        String[] word = new String[n];
        for(int i=0;i<n;i++)
        {
            word[i]=sc.next();
        }
        for(int i=0;i<n;i++)
        {
            word[i]=word[i].toLowerCase();
            char ch1=word[i].charAt(0);
            char ch2=word[i].charAt(1);
            char ch3= word[i].charAt(2);
            if(ch1=='y'&&ch2=='e'&&ch3=='s')
            System.out.println("YES");
            else
            System.out.println("NO");
        }
    }
}
