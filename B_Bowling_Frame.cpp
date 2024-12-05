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
       ll w , b;
       cin >> w >> b;
       ll x = w+b;
       ll ans = -1 + sqrt((1+8*x));
       ans=ans/2;
       cout << ans << endl;
    }
}