package javacode;
import java.util.Scanner;

public class tram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int sum=0;int max=0;
        for(int i=0;i<n;i++)
        {
            int a=sc.nextInt();
            int b=sc.nextInt();
            sum=sum-a;
            sum=sum+b;
            if(sum>max)
            {
                max=sum;
            }
        }
        System.out.println(max);
    }
}
