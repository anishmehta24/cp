import java.util.*;

public class MatchingSet {
    static final int MOD = 998244353;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt(); // number of test cases

        for (int i = 0; i < t; i++) {
            int l = scanner.nextInt(); // left bound of the range
            int r = scanner.nextInt(); // right bound of the range

            // Find prime factors and their counts for each number in the range [l, r]
            Map<Integer, Integer> primeCounts = new HashMap<>();
            for (int num = l; num <= r; num++) {
                Map<Integer, Integer> factors = primeFactors(num);
                for (int factor : factors.keySet()) {
                    int count = factors.get(factor);
                    primeCounts.put(factor, Math.max(primeCounts.getOrDefault(factor, 0), count));
                }
            }

            // Find the maximum exponent of prime factors
            int maxExp = 0;
            for (int count : primeCounts.values()) {
                maxExp = Math.max(maxExp, count);
            }

            // Count the numbers with all prime factors having the maximum exponent
            long numSets = 0;
            for (int num = l; num <= r; num++) {
                boolean valid = true;
                Map<Integer, Integer> factors = primeFactors(num);
                for (int factor : factors.keySet()) {
                    if (factors.get(factor) != maxExp) {
                        valid = false;
                        break;
                    }
                }
                if (valid) {
                    numSets++;
                }
            }

            // Output the result
            System.out.println(maxExp + " " + (numSets % MOD));
        }

        scanner.close();
    }

    // Function to find prime factors of a number and their counts
    static Map<Integer, Integer> primeFactors(int num) {
        Map<Integer, Integer> factors = new HashMap<>();
        for (int i = 2; i * i <= num; i++) {
            while (num % i == 0) {
                factors.put(i, factors.getOrDefault(i, 0) + 1);
                num /= i;
            }
        }
        if (num > 1) {
            factors.put(num, factors.getOrDefault(num, 0) + 1);
        }
        return factors;
    }
}
