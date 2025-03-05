#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    int n ;cin >> n;
    string s;
    cin >> s;
    int c1=0,c2=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='-') c1++;
        else c2++;
    }
    if(c1<2 || c2==0) {
            cout << 0 << endl;
            return;
    }
    int l = c1/2;
    int r = c1-l;
    cout <<  (long long)c2*l*r << endl;
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