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
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        
        if (a >= b) {
           
            cout << a << endl;
        } else {
           
            ll x = (b - a );
            cout << max(0LL, a - x) << endl;
        }
    }
    
    return 0;
}
