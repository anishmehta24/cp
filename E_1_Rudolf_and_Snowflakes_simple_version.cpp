#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 998'244'353;

set<int> st;
void precompute() {
    for(int k=2;k<=1000;k++) {
        int x = k+1;
        int p = k*k;
        for(int i=2;;i++) {
            x+=p;
            if(x > 1e6) break;
            st.insert(x);
            p *= k;
        }
    }
}

void solve() {
    int n; cin >> n;
    if(st.find(n) != st.end()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    precompute();
    while (t--) {
        solve();
    }
}
