import java.util.Scanner;

public class permutation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int n = sc.nextInt();
            for(int j=1;j<=n;j++)
            {
                int s=1+(j%n);
                System.out.print(s+" ");
            }
            System.out.println();
        }
    }
}
