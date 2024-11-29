#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n,b,c;
        cin >> n >> b >>c ;
        // vector<ll> a(n);
        // map<ll,ll> mp;
        ll ans=0;
        if(n==1) {
            if(c>=n) cout << 1 << endl;
            else cout << 0 << endl;
            continue;
        }
        if (b == 0) {
            if(c==0) cout << -1 << endl;
            else if (c < n) cout << n-1 << endl;  
            else cout << -1 << endl;
            continue;
        }
        // if(b==c && n==b) {
        //     cout << n << endl;
        //     continue;
        // }
        ll c=0;
        for(ll i=0;i<n;i++) {
            ll x = b*i + c;

            // cout << x << endl;
           if(x>=n) {
            if(c<(n-i)){
            ans = n-i;
            break;
            }
           }
           else {
            c++;
           }
        }

        cout << ans << endl;
    }
}