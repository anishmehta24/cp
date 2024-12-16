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

bool possible(int i,vector<ll> &a,int n,int m) {
	ll sum = 0; 
	for (int j = 0; j < n; ++j) {
		sum += max(a[j] - j / i, 0ll);
	}
	return sum >= m;
}

int main() {
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    for(auto &v : a) cin >> v;
    sort(a.rbegin(),a.rend());
    int l = 1, r = n;
        while (r - l > 1) {
            int mid = (l + r) >> 1;
            if (possible(mid,a,n,m)) r = mid;
            else l = mid;
        }
        
        if (possible(l,a,n,m)) cout << l << endl;
        else if (possible(r,a,n,m)) cout << r << endl;
        else cout << -1 << endl;
}