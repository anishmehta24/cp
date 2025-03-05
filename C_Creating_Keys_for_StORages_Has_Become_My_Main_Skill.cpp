#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> ans;
    int orr = 0;
    int missing = 0;
    
   
    for (int i=0; i<n; i++) {
        if ((i|x) == x) { 
            ans.push_back(i);
            orr |= i;
        }
    }
    if (orr != x) {
        missing = x ^ orr;
        ans[ans.size()-1] = missing;
    }
    
    while (ans.size() < n) {
        ans.push_back(0);
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}