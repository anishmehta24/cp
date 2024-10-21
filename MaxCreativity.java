import java.util.Scanner;

public class MaxCreativity {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input
        int n = scanner.nextInt(); // number of drawers
        int m = scanner.nextInt(); // moments of inspiration

        int maxCreativity = 0;

        // Iterate through each drawer
        for (int i = 0; i < n; i++) {
            int numSupplies = scanner.nextInt(); // number of supplies in this drawer
            int[] supplies = new int[numSupplies];

            // Read supplies from the drawer
            for (int j = 0; j < numSupplies; j++) {
                supplies[j] = scanner.nextInt();
            }

            // Iterate through supplies in the drawer to maximize creativity
            for (int j = 0; j < Math.min(numSupplies, m); j++) {
                // Select the supply from the outermost position based on the remaining moments of inspiration
                if (j == 0 || j == numSupplies - 1) {
                    maxCreativity += supplies[j];
                } else if (m > 1) {
                    maxCreativity += Math.max(supplies[j], supplies[numSupplies - 1 - j]);
                }
                m--; // Reduce the remaining moments of inspiration
            }
        }

        // Output the maximal total value of a burst of inspiration
        System.out.println(maxCreativity);

        scanner.close();
    }
}
