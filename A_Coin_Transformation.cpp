#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 998244353;
#define ll long long int
using namespace std;


int main() {
    
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll i=4;
        ll ans = 1;
        while(1) {
            if(n<i) {
                cout << ans << endl;
                break;
            }
            i*=4;
            ans*=2;
        }
    }

}
