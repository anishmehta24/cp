import java.util.Scanner;

public class gcd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int x = sc.nextInt();
            int n = sc.nextInt();
            int a=0;
            int s=0;
            for(int j=1;j<=Math.sqrt(x);j++)
            {
                if(x%j==0)
                {
                    a=x/j;
                    if(a>=n)
                    {
                       if(j>=s)
                       s=j;
                    } 
                    if(j>=n)
                    {
                        if(a>=s)
                        s=a;
                    }
                }
            }
        System.out.println(s);
    }
    }
}
