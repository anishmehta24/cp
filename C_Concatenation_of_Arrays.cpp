#include <iostream>
#include <vector>
#include <map>
#include <tuple>
#include <algorithm>
#define ll long long int
using namespace std;

bool cmp(tuple<ll, ll, ll> a, tuple<ll, ll, ll> b) {
    return get<0>(a) < get<0>(b);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> pairs(n);
        vector<ll> m(2 * n);
        
        for (ll i = 0; i < n; ++i) {
            cin >> pairs[i].first >> pairs[i].second;
            m[2 * i] = pairs[i].first;
            m[2 * i + 1] = pairs[i].second;
        }
        
        sort(m.begin(), m.end());
        map<ll, ll> mp;
        ll index = 1;
        for (ll i = 0; i < 2 * n; i++) {
            if (mp.find(m[i]) == mp.end()) {
                mp[m[i]] = index++;
            }
        }

        vector<pair<ll, ll>> x(n);
        for (ll i = 0; i < n; i++) {
            x[i].first = mp[pairs[i].first];
            x[i].second = mp[pairs[i].second];
        }

        vector<tuple<ll, ll, ll>> ans(n);
        for (ll i = 0; i < n; i++) {
            ll sum = x[i].first + x[i].second;
            ans[i] = make_tuple(sum, pairs[i].first, pairs[i].second);
        }

        sort(ans.begin(), ans.end(), cmp);

        for (ll i = 0; i < n; ++i) {
            cout << get<1>(ans[i]) << " " << get<2>(ans[i]) << " ";
        }
        cout << endl;
    }
    
    return 0;
}
