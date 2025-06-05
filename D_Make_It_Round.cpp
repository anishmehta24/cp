#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,m;
    cin >> n >> m;

    int x = n;
    int a=0;
    while(x % 2 == 0) {
        a++;
        x /= 2;
    }
    int b = 0;
    x = n;
    while(x % 5 == 0) {
        b++;
        x /= 5;
    }   
    int k = 1;

    if(a < b) {
        int d = b - a;
        while(d-- > 0 && k*2 <= m) {
            k*=2;
        }

    }
    else {
        int d = a - b;
        while(d-- > 0 && k*5 <= m) {
            k*=5;
        }
    }

    while(k*10 <= m) {
        k *= 10;
    }

    x = m / k;
    k *= x;

    cout << n * k << "\n";
    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
