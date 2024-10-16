#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#define ll long long int
using namespace std;

 
int main() {
    int t;
    cin >> t;
    while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    ll ans = -1;
    for (int i = 1; i <= n; i++) {

        if (n % i == 0) {

            ll m1 = -1e18, m2 = 1e18;

            for (int j = 0; j < n; j += i) {
                ll sum = 0;

                for (int k = j; k < j + i; k++) {
                    sum += a[k];
                }

                m1 = max(m1, sum);
                m2 = min(m2, sum);
            }
            ans = max(ans, m1 - m2);
        }
    }
    cout << ans << endl;
    }
}

