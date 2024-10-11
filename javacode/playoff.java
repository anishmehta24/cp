package javacode;
import java.util.Scanner;

public class playoff {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int a[] = new int[4];
        for(int i = 0;i<t;i++)
        {
            a[0]= sc.nextInt();
            a[1] = sc.nextInt();
            a[2] = sc.nextInt();
            a[3]= sc.nextInt();
            int x = Math.max(a[0],a[1]);
            int x1 = Math.min(a[0],a[1]);
            int y = Math.max(a[2],a[3]);
            int y1 = Math.min(a[2],a[3]);
            
            if(x>y1&&y>x1)
            System.out.println("YES");
            else
            System.out.println("NO");
         

        }
    }
}
