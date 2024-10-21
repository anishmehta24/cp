#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <queue>
#include <numeric>
const int MOD = 1e9+7;
const int N = 1e3+5;
#define ll long long int
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        ll s=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s +=a[i];
        }
        ll cur = 0;
        ll ans = 1;
        for (int i = 0; i < n - 1; i++) {
            cur += a[i], s -= a[i];
            ans = max(ans, gcd(s, cur));
        }
        cout << ans << endl;
    }
}
 
 
