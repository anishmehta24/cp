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

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll gcd1 = a[0], gcd2 = a[1];
        
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0)
                gcd1 = gcd(gcd1, a[i]);
            else
                gcd2 = gcd(gcd2, a[i]);
        }

        bool flag1 = true, flag2 = true;
        
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                if (a[i] % gcd2 == 0)
                   flag1 = false;
            }
            else {
                if (a[i] % gcd1 == 0)
                    flag2 = false;
            }
        }

        ll ans = 0;
        if(flag1) ans = max(ans, gcd2);
        if(flag2) ans = max(ans, gcd1);

        cout << ans << endl;
    }
}
