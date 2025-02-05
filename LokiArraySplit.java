import java.util.Scanner;

public class LokiaaySplit {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

       
        int n = scanner.nextInt();
        long[] a = new long[n];
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextLong();
        }

        long[] prefixSum = new long[n];
        prefixSum[0] = a[0];
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + a[i];
        }

       
        long totalSum = prefixSum[n - 1];
        long ways = 0;
        if (totalSum % 3 == 0) {
            long targetSum = totalSum / 3;
            int[] count = new int[n];
            long currSum = 0;
            for (int i = n - 1; i >= 0; i--) {
                currSum += a[i];
                if (currSum == targetSum) {
                    count[i] = 1;
                }
            }
            for (int i = n - 2; i >= 0; i--) {
                count[i] += count[i + 1];
            }
            currSum = 0;
            for (int i = 0; i < n - 2; i++) {
                currSum += a[i];
                if (currSum == targetSum) {
                    ways += count[i + 2];
                }
            }
        }

        // Output
        System.out.println(ways);

        scanner.close();
    }
}
