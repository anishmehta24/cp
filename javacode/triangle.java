package javacode;
import java.util.Scanner;

public class triangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of aay");
        int n = sc.nextInt();
        int a[]= new int[n];

        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        
    }
}
