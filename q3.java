import java.util.Scanner;
import java.util.Arrays;

public class q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int d = sc.nextInt();
        int a[]= new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            if(j>=n)
            break;
            while(a[j]<a[i])
            {
                a[j]+=d;
                c++;
            }
        }
        System.out.println(c);
    }
}
