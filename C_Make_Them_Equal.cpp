#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;cin >> n;
    char ch;cin >> ch;
    string s;cin >> s;

    int c = 0;
    for(int i=0;i<n;i++) {
        if(s[i] != ch) {
           c++;
        }
    }
    if(c == 0) {
        cout << "0\n";
        return;
    }

    // cout << "1000\n";

    vector<int> ans;

    for (int i = 1; i <= n; ++i) {
        bool valid = true;
        for (int j = i; j <= n; j += i) {
            if (s[j - 1] != ch) {
                valid = false;
                break;
            }
        }
        if (valid) {
            ans.push_back(i);
            break;
        }
    }

    // If no such i found, then push n and n-1
    if (ans.empty()) {
        ans.push_back(n);
        ans.push_back(n - 1);
    }
    cout << ans.size() << "\n";
    for (int pos : ans) {
        cout << pos << " ";
    }
    cout << "\n";


   
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
