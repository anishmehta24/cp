package javacode;
import java.util.Scanner;

public class stick {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int x = n*m;int c=0;
        int t=Math.min(m,n);
    
        // if(t%2==0)
        // System.out.println("Malvika");
        // else
        // System.out.println("Akshat");
        for(int i=t;i>0;i--)
        {
           x=x-(2*i);
           c++;
        }
        if(c%2==0)
        System.out.println("Malvika"); 
        else
        System.out.println("Akshat");
    }
}
