#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
#define ll long long int
const ll MOD = 1e9+7;
using namespace std;

ll nc2(ll n) {
    return n * (n - 1) / 2;
}

int main() {
    ll n, d;
    cin >> n >> d;
    vector<ll> a(n);
    for (auto &i : a) cin >> i;

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        auto ub = upper_bound(a.begin(), a.end() , a[i] + d);
        ll ele = (ub - a.begin()) - i -1;
        if (ele >= 2) {
            ans += nc2(ele);
        }
    }
    cout << ans << endl;
    return 0;
}