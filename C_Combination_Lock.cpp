#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;


void solve() {
    int n;cin >> n ;
    if(n%2==0) {
        cout << -1 << endl;
        return;
    }
    vector<int> ans;
    ans.push_back(1);
    for(int i=3;i<=n;i+=2) {
        ans.push_back(i);
    }
    for(int i=2;i<=n;i+=2){
        ans.push_back(i);
    }
    for(auto i: ans) {
        cout << i << " ";
    }
    cout << endl;

   
        
    
   
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




