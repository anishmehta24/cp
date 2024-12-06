#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int f(int a, int b) {
    if (a > b) return 1;
    if (a == b) return 0;
    if (a < b) return -1;
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll ans = 0;
        if (f(a, c) + f(b, d) > 0) { 
            ans++;
        }
        if (f(a, d) + f(b, c) > 0) {
            ans++;
        }
        if (f(b, c) + f(a, d) > 0) {
            ans++;
        }
        if (f(b, d) + f(a, c) > 0) {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
