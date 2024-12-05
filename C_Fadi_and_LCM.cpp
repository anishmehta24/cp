#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll ans = LLONG_MAX;
    for(ll i=1;i*i<=n;i++) {
        if(n%i==0){
            int g = gcd(i,n/i);
            if(g==1){
                ans = min(ans,max(i,n/i));
            }
        }
    }
    cout << ans << " " << n/ans << endl;
}