#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    string s;cin >> s;
    int c=0;
    for(int i=0;i<s.size()-1;i++) {
        if(s[i]==s[i+1]) c++;
    }
    if(c>0) cout << 1 << endl;
    else cout << s.size() << endl;
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