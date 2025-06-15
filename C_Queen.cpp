#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> parent(n + 1), c(n + 1);
    vector<vector<int>> children(n + 1);

    int root = -1;
    for (int i = 1; i <= n; ++i) {
        cin >> parent[i] >> c[i];
        if (parent[i] == -1) {
            root = i;
        } else {
            children[parent[i]].push_back(i);
        }
    }

    vector<int> result;

    for (int i = 1; i <= n; ++i) {
        if (i == root) continue;
        if (c[i] != 1) continue;

        bool flag = true;
        for (int child : children[i]) {
            if (c[child] != 1) {
                flag = false;
                break;
            }
        }

        if (flag) {
            result.push_back(i);
        }
    }

    if (result.empty()) {
        cout << -1 << '\n';
    } else {
        sort(result.begin(), result.end());
        for (int v : result) {
            cout << v << " ";
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
