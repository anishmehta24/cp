#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;
        vector<ll> a(n);
        for (auto &i : a) cin >> i;

        ll sum = 0LL;
        for (ll i = 0; i < n; i++) sum += a[i];

        ll cnt=0 ;
        sort(a.begin(),a.end());

        ll sumy = sum-y;
        ll sumx = sum-x;

        for (ll i = 0; i < n - 1; i++) {
            ll l = sumy-a[i];
            ll r = sumx-a[i];
            ll jl = -1, jr = -1;
             jl = lower_bound(a.begin()+i+1, a.end(), l) - a.begin();
            jr = upper_bound(a.begin()+i+1, a.end(), r) - a.begin() -1;

            if (jr==-1) {
                jr = n - 1;
            }

            if (jl!=-1 && jr >= jl) {
                cnt += (jr - jl + 1);
            }
        }
        cout << cnt << endl;
    }
}
