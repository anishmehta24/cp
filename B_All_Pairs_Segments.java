
import java.util.*;

/**
 * B_All_Pairs_Segments
 */
public class B_All_Pairs_Segments {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        List<String> r = new ArrayList<>();

        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int q = sc.nextInt();

            List<Long> a = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                a.add(sc.nextLong());
            }

            List<Long> b = new ArrayList<>();
            for (int j = 0; j < q; j++) {
                b.add(sc.nextLong());
            }

            String result = solve(n, q, a, b);
            r.add(result);
        }

        // System.out.println(join(r, "\n"));
        System.out.println(String.join("\n", r));
    }

    private static String solve(int n, int q, List<Long> a, List<Long> b) {
        Map<Long, Long> m = new HashMap<>();

        for (int i = 1; i <= n; i++) {
            long k1 = (long)(i - 1) * (n - i + 1) + (n - i);
            m.put(k1, m.getOrDefault(k1, 0L) + 1);

            if (i < n) {
                long d = a.get(i) - a.get(i - 1) - 1;
                if (d > 0) {
                    long k2 = (long)i * (n - i);
                    m.put(k2, m.getOrDefault(k2, 0L) + d);
                }
            }
        }

        List<String> res = new ArrayList<>();
        for (long k : b) {
            res.add(String.valueOf(m.getOrDefault(k, 0L)));
        }

        // return join(res, " ");
        return String.join(" ", res);
    }

}