import java.util.Scanner;

public class permutationprinting {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int k =0;k<t;k++)
        {
            int n = sc.nextInt();
            int a[]= new int[n];
            int c=n;
            int d=1;
            int i=0;
            while(i<n)
            {
                if(i%2==0)
                {
                    a[i]=c;
                    c--;
                }
                else
                {
                    a[i]=d;
                    d++;
                }
                i++;
                
            }
            for(int j=0;j<n;j++)
            {
                System.out.print(a[j]+" ");
            }
            System.out.println();
        }
    }
}
