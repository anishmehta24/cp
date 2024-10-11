package javacode;
import java.util.Scanner;

public class magnet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int n[]=new int[t];int c=0;
        for(int i=0;i<t;i++)
        {
            n[i] =sc.nextInt();
        }
        for(int i=0;i<t-1;i++)
        {
           if(n[i]!=n[i+1])
           c++;
        }
        System.out.println(c+1);
    }
}
