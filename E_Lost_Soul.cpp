#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMatches(const vector<int>& a, const vector<int>& b) {
    int n = a.size();
    vector<bool> matched(n, false);
    int count = 0;

    // Count direct matches
    for (int i = 0; i < n; ++i) {
        if (a[i] == b[i]) {
            matched[i] = true;
            ++count;
        }
    }

    // Try matching via allowed operations
    for (int i = 0; i < n - 1; ++i) {
        if (!matched[i] && a[i] == b[i + 1]) {
            ++count;
            matched[i] = true;
        }
        if (!matched[i] && b[i] == a[i + 1]) {
            ++count;
            matched[i] = true;
        }
    }

    return count;
}

int solve(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int maxMatch = getMatches(a, b);

    for (int i = 0; i < n; ++i) {
        vector<int> newA = a, newB = b;
        newA.erase(newA.begin() + i);
        newB.erase(newB.begin() + i);
        maxMatch = max(maxMatch, getMatches(newA, newB));
    }

    return maxMatch;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int& x : a) cin >> x;
        for (int& x : b) cin >> x;

        cout << solve(a, b) << '\n';
    }

    return 0;
}
