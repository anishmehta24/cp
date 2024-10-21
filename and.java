import java.util.Scanner;

public class and {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int a[] = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            int count = 0;
            for (int bit = 30; bit > 0; bit--) {
                count = 0;
                for (int i = 0; i < n; i++) {
                    if ((a[i] & 1 << bit) == 0)
                        count++;
                }

                if (count <= m) {
                    m = m - count;
                }
                for (int i = 0; i < n; i++) {
                    if ((a[i] & (1 << bit)) == 0) {
                        a[i] |= (1 << bit);
                    }
                }
            }
            int ans = a[0];
            for (int i = 0; i < n; i++) {
                ans = ans & a[i];
            }
            System.out.println(ans);

        }
    }
}
