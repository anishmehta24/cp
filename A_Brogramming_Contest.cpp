#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    int n;cin >> n;
    string s;cin >> s;
    set<char> st;
    for(int i=0;i<n;i++) {
        st.insert(s[i]);
    }
    if(st.size()==1) {
        if(s[0]=='0') cout << 0 << endl;
        else cout << 1 << endl;
        return;
    }
    int c=0;
    if(s[0]=='0') c=0;
    else c=1;
    for(int i=0;i<n-1;i++) {
        if(s[i]=='0' && s[i+1]=='1') {
            c++;
        }
        else if(s[i]=='1' && s[i+1]=='0') {
            c++;
        }
    }

    cout << c << endl;
    
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