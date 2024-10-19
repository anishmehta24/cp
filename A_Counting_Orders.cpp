#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n; cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<n; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        ll ans = 1;
        for (int i=0; i<n; i++){
            int x = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            int count = a.size() - x;
            ans = ans * max(count - i, 0) % MOD;
        }
        cout << ans << endl;
    }

    return 0;
}
