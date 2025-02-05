#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a) cin >> it;
        sort(a.begin(), a.end());
        set<int> s;
        for (int i = 0; i < n; i++) {
            if(a[i+1]==a[i]) s.insert(a[i]);
        }
        map<pair<int, int>, int> diff;
        for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] - a[i] > 0)
                diff[{a[i], a[i + 1]}] = a[i + 1] - a[i];
        }
        for (auto it : s) {
            for(auto it2 : diff) {

            }
        }

    }
}
