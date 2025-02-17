#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

bool check(ll n) {
    string s = to_string(n);
    if(s.find('7')!=string::npos) return true;
    return false;
}

void solve() {
    ll n; cin >> n;
    ll ans = 10;
    for(ll i=9;i<=1e9;i=i*10+9) {
        ll c=0; ll x = n;
        while(!check(x)) {
            x+=i;
            c++;
        }
        ans = min(ans,c);   
    }
    cout << ans << endl; 
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