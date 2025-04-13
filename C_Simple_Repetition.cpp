#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;         
    if (n <= 3) return true;          

    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i <= n; i += 6) {
        if (n%i == 0 || n%(i+2) == 0)
            return false;
    }
    return true;
}

void solve() {
    int x,k;cin >> x >> k;
    // if(x%2==0) {
    //     cout << "NO\n";
    //     return;
    // }
    if(k==1) {
        if(isPrime(x)) {
            cout << "YES\n";
            return;
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    if(k>2) {
        cout << "NO\n";
        return;
    }
    if(k==2 ) {
        if(x==1)
        cout << "YES\n";
        else cout << "NO\n";
    }

   
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
