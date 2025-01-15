#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 998244353;
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i:a) cin >> i;

    map<ll,ll> last_pos;
    for(ll i=0;i<n;i++) {
        last_pos[a[i]]=i;
    }

    ll ind=0 , ngroups=0;
    for(ll i=0;i < n ;i++) {
        ind=max(ind,last_pos[a[i]]);

        if(i==ind) {
            ngroups++;
            ind++;
        }
    }

    ll ans =1;
    for(ll i=0;i<ngroups-1;i++) {
        ans = (ans * 2) % MOD;
    }

    cout << ans << endl;

}