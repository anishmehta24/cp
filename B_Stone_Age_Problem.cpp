#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    vector<int> last_update(n, 0);  
    int time = 0;
    int sum = accumulate(a.begin(), a.end(), 0LL);
    int last_set_time = -1, last_set_val = -1;

    while (q--) {
        time++; 
        int t;
        cin >> t;

        if (t == 1) {
            int i, x;
            cin >> i >> x;
            i--; 

            int prev_val;
            if (last_update[i] > last_set_time) {
                prev_val = a[i];
            } else {
                prev_val = last_set_val;
            }

            sum -= prev_val;
            sum += x;

            a[i] = x;
            last_update[i] = time;

            cout << sum << '\n';
        } else {
            int x;
            cin >> x;
            last_set_time = time;
            last_set_val = x;
            sum = n * x;
            cout << sum << '\n';
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    solve();
}
