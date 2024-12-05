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

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n,b,c;
        cin >> n >> b >>c ;
        if (b == 0) {
            if(c>=n) cout << n << endl;
            else if (c >=n-2) cout << n-1 << endl;  
            else cout << -1 << endl;
        }
       else {
		    if (c >= n) cout << n << endl;
			else cout << n - max(0ll, 1 + (n - c - 1) / b) << endl;
		}

    }
}