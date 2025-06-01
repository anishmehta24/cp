#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAXA = 1'000'000;
int spf[MAXA+1];

void precompute() {
    for(int i=2;i<=MAXA;i++){
        if(spf[i] == 0){            
            for(int j=i; j<=MAXA; j += i){
                if(spf[j] == 0) spf[j] = i;
            }
        }
    }
}   


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    
    map<int, int> mp;
    for(auto x : a){
        while(x > 1){
            int p = spf[x], cnt = 0;
            while(x % p == 0){
                x /= p;
                cnt++;
            }
            mp[p] += cnt;
        }
    }

    bool ok = true;
    for(auto &it : mp){
        if(it.second % n != 0){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
     cin >> t;
    precompute();
    while (t--) {
        solve();
    }
}
