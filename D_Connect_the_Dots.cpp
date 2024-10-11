#include <iostream>
#include <vector>
using namespace std;

class DSU {
public:
    vector<int> parent, rank;

    DSU(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (x == parent[x]) return x;
        return parent[x] = find(parent[x]);  // Path compression
    }

    void unite(int x, int y) {
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
};

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        DSU dsu(n);  // Initialize DSU for n points
        
        for (int i = 0; i < m; i++) {
            int a, d, k;
            cin >> a >> d >> k;
            
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
        
        cout << components << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
