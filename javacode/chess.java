package javacode;
import java.util.Scanner;

public class chess {
    public static void main(String[] args) 
    {
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        int c=0,d=0;
        String s=sc.next();

        for(int i=0;i<n;i++)
        {
            char ch=s.charAt(i);
            if(ch=='A')
            c++;
            else
            d++;
        }
        if(c>d)
        System.out.println("Anton");
        else if(c<d)
        System.out.println("Danik");
        else
        System.out.println("Friendship");
    }
}
