#include <bits/stdc++.h>
using namespace std;
#define int long long

int check(vector<int>& a, int l, int r) {
    vector<int> temp(a.begin()+l, a.begin()+r+1);
    sort(temp.begin(), temp.end());
    return temp[(temp.size() - 1) / 2]; 
}


void solve() {
    int n;cin >> n;
    int k;cin >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    for(int i=0;i<n-1;i++) {
        if(a[i] <= k) {
            if(i+1 < n && a[i+1] <= k) {
                int m1 = check(a, 0, i-1);
                int m2 = check(a, i-1, i );
                int m3 = check(a, i, n - 1);
            
                vector<int> x = {m1, m2, m3};
                sort(x.begin(), x.end());
            
                if(x[1] <=k) {
                    cout << "YES" << "\n";
                    return;
                }
            }
            if(i+2 < n && a[i+2] <= k) {
                int m1 = check(a, 0, i-1);
                int m2 = check(a, i-1, i+1 );
                int m3 = check(a, i+1, n - 1);
            
                vector<int> x = {m1, m2, m3};
                sort(x.begin(), x.end());
            
                if(x[1] <=k) {
                    cout << "YES" << "\n";
                    return;
                }
            }
        }
    }
    cout << "NO" << "\n";
    
   
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
