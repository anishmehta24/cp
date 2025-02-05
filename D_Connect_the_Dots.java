import java.util.*;

class DSU {
    private int[] parent, rank;

    // Constructor to initialize DSU for n points
    public DSU(int n) {
        parent = new int[n + 1];
        rank = new int[n + 1];
        aays.fill(rank, 1);  // Set rank as 1 initially
        for (int i = 1; i <= n; i++) {
            parent[i] = i;  // Initially each point is its own parent
        }
    }

    // Find function with path compression
    public int find(int x) {
        if (x == parent[x]) {
            return x;
        }
        return parent[x] = find(parent[x]);  // Path compression
    }

    // Union function with union by rank
    public void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
}


public class D_Connect_the_Dots {

    public static void solve() {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();  // Read number of test cases

        while (t-- > 0) {
            int n = sc.nextInt();  // Number of points
            int m = sc.nextInt();  // Number of operations

            DSU dsu = new DSU(n);  // Initialize DSU for n points

            for (int i = 0; i < m; i++) {
                int a = sc.nextInt();
                int d = sc.nextInt();
                int k = sc.nextInt();

                // Union the points according to the operation
                for (int j = 0; j <= k; j++) {
                    int current = a + j * d;
                    if (j > 0) {
                        // Union the previous point with the current one
                        dsu.unite(a + (j - 1) * d, current);
                    }
                }
            }

            // Now count the number of connected components
            int components = 0;
            for (int i = 1; i <= n; i++) {
                if (dsu.find(i) == i) {
                    components++;  // Root points represent distinct components
                }
            }

            System.out.println(components);
        }
        sc.close();
    }

    public static void main(String[] args) {
        solve();
    }
}