#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;

    string s;cin >> s;
    int a = 1,b=n;
    vector<int> ans;
    for(int i=s.size()-1;i>=0;i--) {
        if(s[i] == '<') {
            ans.push_back(a);
            a++;
        }
        else {
            ans.push_back(b);
            b--;
        }
    }
    ans.push_back(a);
    reverse(ans.begin(), ans.end());
    for(auto x : ans) {
        cout << x << " ";
    }
    cout << "\n";
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
