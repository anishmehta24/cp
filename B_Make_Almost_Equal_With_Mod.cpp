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

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    ll x=2;
    while(true){
        set<ll> s;
        for(ll i=0;i<n;i++) {
            s.insert(a[i]%x);
        }
        if(s.size()==2) {
            cout << x << endl;
            break;
        }
        x*=2;
    }

}


int main() {
    int t;
    cin >> t;
    while(t--) {
       
       solve();
    }
}