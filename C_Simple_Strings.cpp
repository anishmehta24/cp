#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    string s;cin >> s;
    int n = s.size();
    
    for (int i = 0, j = 0; i < n; i = j) {
        while (j < n && s[j] == s[i]) j++; 
        int len = j - i; 
        
        
        for (int k = i + 1; k < j; k += 2) {
            char c = 'a'; 
            while (c == s[k - 1] || (k + 1 < n && c == s[k + 1])) 
                c++;
            s[k] = c; 
        }
    }
    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
}