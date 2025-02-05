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


int main() {
    int t; 
    cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        for(int i=0;i<n;i++) {
                cin >> a[i];
                sum+=a[i];
        }

        if(sum % n != 0) {
            cout << "NO" << endl;
            continue;
        }

        ll target = sum / n;
        for(ll i = 1; i < n-1; i++) {
            if(a[i-1] == target) continue;

            if(a[i-1] < target) {
                a[i+1] -= (target - a[i-1]);
            }
            else {
                a[i+1] += (a[i-1] - target);
            }

        }

        if(a[n-1] == target) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}