#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,x,y;
        cin >> n >> x >> y;
        vector<int> a(n);
        // vector<ll> b(n);
        // vector<ll> c(n);
        // map<ll,ll> mp1;
        // map<ll,ll> mp2;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            // b[i] = a[i]%x;
            // c[i] = a[i]%y;
            // mp1[b[i]] = c[i] - b[i];
        }

        // sort(b.begin(),b.end());
        //sort(c.begin(),c.end());

        map<pair<int, int>, int> mp;
        ll ans = 0;
        
        for (int i = 0; i < n; ++i) {
            
            int m1 = a[i] % x;
            int m2 = a[i] % y;
            int target_xx = (x - m1) % x;
            
            ans += mp[{target_xx, m2}];
            mp[{m1, m2}]++;
        }
        
        cout << ans << endl;

    }
}




