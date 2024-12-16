    #include <iostream>
    #include <vector>
    #include <map>
    #include <set>
    #include <math.h>
    #include <string>
    #include <numeric>
    #include <cstring>
    #include <algorithm>
    #include <queue>
    #define ll long long int
    const int MOD = 1e9+7;
    using namespace std;

    int main() {
        int t;
        cin >> t;
        while(t--) {
            int n;
            cin >> n;
            ll k = n *(n-1)/2;
            vector<ll> b(k);
            for(auto &i:b) cin >>i;
            sort(b.begin(),b.end());
            int x=0;
        
            // vector<ll> ans(n);
            int m=n-1;
            for(int i=0;i<n-1;i++) {
                ll ans=INT_MAX;
                for(int j=0;j<m;j++) {
                    ans = min(b[x++],ans);
                }
                m--;
                cout << ans << " ";
            }
            int ans = 1e9;
            cout << ans << " ";
            cout << endl;
        }
    }