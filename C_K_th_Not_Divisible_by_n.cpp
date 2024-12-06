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

bool check(ll x , ll n , ll k) {
    return (x-x/n)>=k;
}

int main(){
    int t;  
    cin >> t;
    while(t--) {
        ll n,k;
        cin >> n >> k;
        ll low=1,high=1e18;
        ll ans=-1;
        while(low<=high) {
            ll mid = low+(high-low)/2;
            if(check(mid,n,k)){
                ans = mid;
                high=mid-1;
            }
            else {
                low = mid+1;
            }
        }
        cout << ans << endl;
    }
}