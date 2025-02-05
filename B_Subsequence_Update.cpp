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
        ll n, l, r;
        cin >> n >> l >> r;
        l--;
        r--;

        vector<ll> a(n);
        for(auto &i:a) cin >> i;
        vector<ll> b(n);
        for(int i=0;i<n;i++) b[i]=a[i];
         sort(a.begin()+l,a.end());
         sort(b.begin(),b.begin()+r+1);
         ll s1=0LL;
         for(int i=l;i<=r;i++) s1+=a[i];
         ll s2=0LL;
         for(int i=0;i<=(r-l);i++) s2+=b[i];
         cout << min(s1,s2) << endl;
    }
    
}

