#include <bits/stdc++.h>
using namespace std;
#define int long long

int f(int x) {
    if (x <= 1) return 0;
    int c = 0;
    x--;
    while (x > 0) {
        x /= 2;
        c++;
    }
    return c;
}

void solve() {
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int r = min(a, n - a + 1);
    int c = min(b, m - b + 1);


    cout << 1 + min((f(r)+ f(m)), (f(n) + f(c))) << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
     cin >> t;
    while (t--) {
        solve();
    }
}
