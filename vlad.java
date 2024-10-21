import java.util.Scanner;

public class vlad {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int n = sc.nextInt();
            solve(n);
        }
    }

    public static void solve(int n)
    {

        

        int d = n/10;
        int ans = (45 * d) + 10 * (d-1);
        int k = n%10;
        for(int i = d;i<=k+1;i++){
            ans+=i;
        }
        System.out.println(ans);
    }
}
