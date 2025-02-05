#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9+7;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
       int n; cin >> n;
       vector<int> a(n);
       for(auto &it:a) cin >> it;
       int e =0,o=0;
       for(int i=0;i<n;i++) {
        if(a[i]%2!=0) o++;
        else e++;
       }
       if(e==0) cout << max(0,o-1) << endl;
       else cout << (1+o) << endl;
    }
    
}

