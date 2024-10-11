#include <iostream>
#include <vector>
#include <unordered_map>
#include <string.h>

using namespace std;

string solve(int n, int q, vector<long long>& x, vector<long long>& queries) {
    unordered_map<long long, long long> freq;

    for (int i = 0; i < n; i++) {
        long long kp = i * (n - i) + (n - i - 1);
        freq[kp]++;

        if (i < n - 1) {
            long long delta = x[i + 1] - x[i] - 1;
            if (delta > 0) {
                long long kbtw = (i + 1) * (n - (i + 1));
                freq[kbtw] += delta;
            }
        }
    }

    string result;
    for (long long k : queries) {
        result += to_string(freq[k]) + " ";
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        vector<long long> queries(q);
        for (int i = 0; i < q; i++) {
            cin >> queries[i];
        }

        cout << solve(n, q, x, queries) << endl;
    }

    return 0;
}
