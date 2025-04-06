#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin>>n;
    if(n%2==0){
        cout << -1 << endl;
        return;
    }
    cout << n << " ";
    for(int i=1;i<n;i++){
        cout << i << " ";
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}



