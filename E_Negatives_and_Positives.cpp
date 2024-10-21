#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        ll c = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] < 0) {c++; a[i] = -a[i];}
            sum += (a[i]);
        }
        sort(a.begin(), a.end());
        if(c%2 != 0) sum -= 2 * a[0];
        cout << sum << endl;
    }
}
